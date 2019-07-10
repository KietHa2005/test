#include "worldclock.h"

worldclock::worldclock(QObject *parent)
{
}

void worldclock::setCn(QString Cn)
{
    CtName = Cn;
}
void worldclock::setTz(int Tz)
{
    TimeZn = Tz;
}
QString worldclock::getCn()
{
    return CtName;
}
int worldclock::getTz()
{
    return TimeZn;
}


