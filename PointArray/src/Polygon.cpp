#include "Polygon.h"

int Polygon :: n = 0;
Polygon :: Polygon ( const PointArray & pa ) : points ( pa ) {
++ numPolygons ;
}
Polygon :: Polygon ( const Point pointArr [], const int numPoints ) :
points ( pointArr , numPoints ) {
++ numPolygons ;
}
