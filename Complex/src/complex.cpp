#include "complex.h"
#include <iostream>
using namespace std;
complejo::complejo()
{
    r=0.0, i=0.0;
}
complejo::complejo(double x, double y)
{
    r=x, i=y;
}
complejo complejo::suma(complejo b)
{
    complejo temp;
    temp.r=r+b.r;
    temp.i=i+b.i;
    return temp;
}
void complejo::imprimir()
{
    cout<<r<<"+"<<i<<"i"<<endl;
}
complejo complejo::prod_esc(int t)
{
    complejo temp;
    temp.r=r*t;
    temp.i=i*t;
    return temp;
}
