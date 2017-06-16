#ifndef POLYGON_H
#define POLYGON_H
#include <PointArray.h>

class Polygon
{
    protected :
        static int numPolygons ;
        PointArray points ;
    public :
        Polygon ( const PointArray & pa );
        Polygon ( const Point points [] , const int numPoints );
        virtual double area () const = 0;
        static int getNumPolygons () { return numPolygons ;}
        int getNumSides () const { return points . getSize () ;}
        const PointArray * getPoints () const { return & points ;}
        ~ Polygon () {-- numPolygons ;}
};


#endif // POLYGON_H
