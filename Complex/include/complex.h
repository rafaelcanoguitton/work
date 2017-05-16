#ifndef COMPLEX_H
#define COMPLEX_H


class complejo
{
    private:
        double r,i;
    public:
        complejo();
        complejo(double nx,double ny);
        complejo suma(complejo b);
        void imprimir();
        complejo prod_esc(int t);
};

#endif
