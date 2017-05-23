#include <iostream>
#include <Persona.h>
#include <Varon.h>
#include <Mujer.h>
using namespace std;

int main()
{
    Varon x("Julio",36,true);
    Mujer y("Maria",20,10);
    Persona *p;
    p=&y;
    p->getdesc();
    return 0;
}
