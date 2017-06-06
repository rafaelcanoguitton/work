#ifndef JANITOR_H
#define JANITOR_H
#include <string>
#include <Persona.h>
class Janitor:public Persona
{
    public:
        Janitor(string n,int y,int m,int d,int c);
        void getdesc();
        virtual ~Janitor();

    protected:
        int cl;
};

#endif // JANITOR_H
