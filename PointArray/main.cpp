#include <iostream>
#include <PointArray.h>
#include <Point.h>
#include <Polygon.h>
#include <Rectangle.h>
#include <Triangle.h>
using namespace std;
void printAttributes (Polygon *p)
    {
        cout << "p ’s area is " << p -> area () << ".\ n";
        cout << "p ’s points are :\ n";
        PointArray *pa=p->getPoints ();
        for ( int i = 0; i < pa -> getSize (); ++ i)
        {
            cout << "(" << pa -> get (i) -> getX () << ", " << pa -> get (i) ->getY () << ")\n";
        }
    }
int main( int argc , char * argv [])
{
    Point pt1;
    pt1.setX(4);
    pt1.setY(5);
    PointArray lawl;
    lawl.push_back(pt1);
    Point *rofl=lawl.get(0);
    cout<<rofl->getX();
    cout << " Enter lower left and upper right coords of rectangle as four space separated integers : ";
    int llx , lly , urx , ury ;
    cin >> llx >> lly >> urx >> ury ;
    Point ll ( llx , lly ), ur ( urx , ury );
    Rectangle r(ll , ur );
    printAttributes (& r);
    cout << " Enter three coords of triangle as six space separatedintegers : ";
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    Point a(x1 , y1 ), b(x2 , y2 ), c(x3 , y3 );
    Triangle t(a , b , c);
    printAttributes (& t);

    return 0;
}
