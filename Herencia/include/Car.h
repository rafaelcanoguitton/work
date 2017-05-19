#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Car:public Vehiculo
{
    string style;
public:
    Car(const string &miLiscencia, const string miAno, const string &miEstilo)
        :Vehiculo(miLiscencia, miAno), style(miEstilo){}
    const string &getEstilo(){return style;}
};

#endif // CAR_H
