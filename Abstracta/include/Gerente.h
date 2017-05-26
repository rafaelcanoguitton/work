#ifndef GERENTE_H
#define GERENTE_H


class Gerente:public Persona
{
    public:
        Gerente();
        getdesc();
        virtual ~Gerente();
    protected:
        int ingresos;
}

#endif // GERENTE_H
