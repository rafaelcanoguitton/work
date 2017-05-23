#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
    public:
        Persona(const string &name, const int age);
        virtual void getdesc();
    protected:
        string nombre;
        int edad;
};

#endif // PERSONA_H
