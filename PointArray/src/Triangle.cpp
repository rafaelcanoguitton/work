#include "Triangle.h"

Triangle :: Triangle ( const Point &a , const Point &b , const Point &c)
: Polygon ( updateConstructorPoints (a , b , c), 3) {}

double Triangle :: area () const {

int dx01 = points . get (0) -> getX () - points . get (1) -> getX (),

dx12 = points . get (1) -> getX () - points . get (2) -> getX (),

dx20 = points . get (2) -> getX () - points . get (0) -> getX ();

int dy01 = points . get (0) -> getY () - points . get (1) -> getY (),

dy12 = points . get (1) -> getY () - points . get (2) -> getY (),

dy20 = points . get (2) -> getY () - points . get (0) -> getY ();

double a = std :: sqrt ( dx01 * dx01 + dy01 * dy01 ),

b = std :: sqrt ( dx12 * dx12 + dy12 * dy12 ),

c = std :: sqrt ( dx20 * dx20 + dy20 * dy20 );

double s = (a + b + c) / 2;

return std :: sqrt ( s * (s -a) * (s -b) * (s -c) );

}
