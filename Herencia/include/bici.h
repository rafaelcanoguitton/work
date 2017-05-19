#ifndef BICI_H
#define BICI_H
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class bici:public Vehiculo
{
    string color;
public:
    bici(const string &miLiscencia, const string miAno, const string &miColor):Vehiculo(miLiscencia, miAno), color(miColor){}
    const string &getColor(){return color;}
};

#endif // BICI_H
