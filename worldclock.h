#ifndef WORLDCLOCK_H
#define WORLDCLOCK_H

#include <QObject>
#include <QTimer>
#include <QAction>
#include <QTime>

class worldclock: public QObject
{
    Q_OBJECT
public:
    explicit worldclock(QObject *parent = nullptr);
    void setCn(QString Cn);
    void setTz(int Tz);
    QString getCn();
    int getTz();
signals:

public slots:

private:
    QString CtName;
    int TimeZn;
};

#endif // WORLDCLOCK_H
