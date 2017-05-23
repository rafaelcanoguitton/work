#ifndef MUJER_H
#define MUJER_H
#include <iostream>
#include "Persona.h"
using namespace std;

class Mujer:public Persona
{
    public:
        Mujer(const string &name, const int age,const int score);
        virtual void getdesc();
    protected:
        int puntaje;
};

#endif // MUJER_H
