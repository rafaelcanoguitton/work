#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <Birthday.h>
using namespace std;

class Persona
{
    public:
        Persona();
        virtual void getdesc();
        virtual ~Persona();
    protected:
        Birthday b;
        int edad;
        string nombre;
};

#endif // PERSONA_H
