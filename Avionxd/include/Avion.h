#ifndef AVION_H
#define AVION_H


class Avion
{
    public:
        Avion(int p,int t);
        Avion();
        void getd();
        virtual ~Avion();
    protected:
        int peso,tamano;
};

#endif // AVION_H
