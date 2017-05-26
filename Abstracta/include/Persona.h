#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <Birthday.h>
using namespace std;

class Persona
{
    public:
        Persona(string n,int y,int m,int d);
        virtual void getdesc()=0;
        virtual ~Persona();
    protected:
        Birthday b;
        int edad;
        string nombre;
};

#endif // PERSONA_H
