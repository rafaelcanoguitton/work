#include "Rectangle.h"

Point constructorPoints [4];

Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,

const Point &p3 , const Point & p4 = Point (0 ,0)) {

constructorPoints [0] = p1 ;

constructorPoints [1] = p2 ;

constructorPoints [2] = p3 ;

constructorPoints [3] = p4 ;

return constructorPoints ;

}
Rectangle :: Rectangle ( const Point &ll , const Point & ur )
: Polygon ( updateConstructorPoints (ll , Point ( ll . getX (), ur . getY ()
),
ur , Point ( ur . getX (), ll . getY ()
)), 4) {}
Rectangle :: Rectangle ( const int llx , const int lly , const int urx ,
const int ury )
: Polygon ( updateConstructorPoints ( Point ( llx , lly ), Point ( llx ,
ury ),
Point ( urx , ury ), Point ( urx ,
lly )), 4) {}
double Rectangle :: area () const {

int length = points . get (1) -> getY () - points . get (0) -> getY ();

int width = points . get (2) -> getX () - points . get (1) -> getX ();

return std :: abs (( double ) length * width );

}
