#ifndef SHAPEDCLOCK_H
#define SHAPEDCLOCK_H

#include <QWidget>
#include <QThread>
#include <QTime>

class ShapedClock : public QWidget
{
    Q_OBJECT

public:
    ShapedClock(QWidget *parent,int tz);
    QSize sizeHint() const override;
    int tmzn;
    int hour;

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    QPoint dragPosition;
};

#endif
