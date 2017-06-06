#ifndef GERENTE_H
#define GERENTE_H
#include <string>
#include <Persona.h>

class Gerente:public Persona
{
    public:
        Gerente(string n,int y,int m,int d,int i);
        void getdesc();
        virtual ~Gerente();
    protected:
        int ingresos;
};

#endif // GERENTE_H
