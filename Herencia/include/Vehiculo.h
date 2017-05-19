#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Vehiculo
{
protected:
    string liscencia,ano;
public:
    Vehiculo(const string &miLiscencia, const string miAno):liscencia(miLiscencia), ano(miAno){}
    const string getDesc()const{return liscencia + " de " + ano;}
    const string &getLiscencia() const{return liscencia;}
    const string getAno() const {return ano;}
};

#endif // VEHICULO_H
