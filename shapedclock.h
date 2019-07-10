#ifndef SHAPEDCLOCK_H
#define SHAPEDCLOCK_H

#include <QWidget>
#include <QThread>
#include <QTime>

class ShapedClock : public QWidget
{
    Q_OBJECT

public:
    ShapedClock(QWidget *parent,int tz,QString cn);
    QSize sizeHint() const override;
    QString ctnm;
    int tmzn;
    QString getCN();
    int getTZ();

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    QPoint dragPosition;
};

#endif
