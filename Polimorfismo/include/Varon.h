#ifndef VARON_H
#define VARON_H
#include <iostream>
#include "Persona.h"
using namespace std;

class Varon:public Persona
{
    public:
        Varon(const string &name, const int age,const int calv_);
        virtual void getdesc();
    protected:
        bool calvo;

};

#endif // VARON_H
