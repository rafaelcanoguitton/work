#ifndef TORRES_H
#define TORRES_H
#include <vector>
using namespace std;
#include <Avion.h>
class Torres
{
    public:
        vector<Avion *> testv;
    Torres();
    void agregar(Avion *c);
    void recorrer();
    ~Torres();
};

#endif // TORRES_H
