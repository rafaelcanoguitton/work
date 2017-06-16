#ifndef POINT_H
#define POINT_H
class Point
{
    int x, y;
    public :
        Point();
        Point(int a, int b);
        int getX ();
        int getY ();
        void setX (const int xx);
        void setY (const int yy);
};
#endif // POINT_H
