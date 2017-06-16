#include "Point.h"

Point::Point()
{
    x=0;
    y=0;
}
Point::Point(int a,int b)
{
    x=a;
    y=b;
}
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}

void Point::setX ( const int xx)
{
    x = xx;
}
void Point::setY ( const int yy)
{
    y = yy;
}
