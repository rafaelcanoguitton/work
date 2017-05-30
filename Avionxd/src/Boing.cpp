#include "Boing.h"
#include <iostream>
#include <Avion.h>
using namespace std;

Boing::Boing():Avion(peso,tamano)
{
    peso=0;
    tamano=0;
    personas=0;
}
Boing::Boing(int p, int t, int p2):Avion(peso,tamano)
{
    peso=p;
    tamano=t;
    personas=p2;
}
void Boing::getd()
{
    cout<<"El avion pesa: "<<peso<<"Kg mide: "<<tamano<<"cmxd "<<"y "<<personas<<" personas"<<endl;
}
