#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    int q=7;
    cout << "Vamos a sumar un complejo :v y a hacer producto escalar xd" << endl;
    complejo x(2.0,3.0);
    complejo y(1.0,10.0);
    complejo z;
    z=x.suma(y);
    cout<<"La suma es: "<<endl;
    z.imprimir();
    z=z.prod_esc(q);
    cout<<"El producto escalar por "<<q<<" es: "<<endl;
    z.imprimir();

    return 0;
}
