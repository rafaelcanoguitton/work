#ifndef BOING_H
#define BOING_H
#include <Avion.h>

class Boing:public Avion
{
    public:
        Boing();
        Boing(int p, int t,int p2);
        virtual ~Boing();
        void getd();
    protected:
        int personas;
};

#endif // BOING_H
