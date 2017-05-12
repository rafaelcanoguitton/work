#include "vector.h"
#include <iostream>
#include <math.h>
using namespace std;

void Vector::impr()
{
    cout<<"Start:"<<endl;
    start.impri();
    cout<<"End:"<<endl;
    endxd.impri();
}
void Vector::module()
{
    cout<<"Module:"<<sqrt((endxd.x-start.x)*(endxd.x-start.x)+(endxd.y-start.y)*(endxd.y-start.y))<<endl;
}
void Vector::origin()
{
    start.x=0;
    start.y=0;
    endxd.x=0;
    endxd.y=0;
}
