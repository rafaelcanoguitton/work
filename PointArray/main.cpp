#include <iostream>
#include <PointArray.h>
#include <Point.h>
using namespace std;

int main()
{
    Point pt1;
    pt1.setX(4);
    pt1.setY(5);
    PointArray lawl;
    lawl.push_back(pt1);
    Point *rofl=lawl.get(0);
    cout<<rofl->getX();
    return 0;
}
