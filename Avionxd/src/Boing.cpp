#include "Boing.h"
#include <iostream>
#include <Avion.h>
using namespace std;

Boing::Boing()
{
    peso=0;
    tamano=0;
    personas=0;
}
Boing::Boing(int p, int t, int p2)
{
    peso=p;
    tamano=t;
    personas=p2;
}
void Boing::getd()
{
    cout<<"El avion pesa: "<<peso<<"Kg mide: "<<tamano<<"cm "<<"y "<<personas<<" personas"<<endl;
}
Boing::~Boing()
{
    cout<<"Se cayo el avioncito xd"<<endl;
}
