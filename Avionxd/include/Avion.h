#ifndef AVION_H
#define AVION_H


class Avion
{
    public:
        Avion(int p,int t);
        Avion();
        virtual void getd()=0;
        virtual int gett();
    protected:
        int peso,tamano;
};

#endif // AVION_H
