#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Truck:public Vehiculo
{
    string style,traxion;
public:
    Truck(const string &miLiscencia, const string miAno, const string &miEstilo, const string &miTraccion)
        :Vehiculo(miLiscencia, miAno), style(miEstilo), traxion(miTraccion){}
    const string &getEstilo(){return style;}
    const string &getTraccion(){return traxion;}
};

#endif // TRUCK_H
