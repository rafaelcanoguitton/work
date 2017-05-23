#include <iostream>
#include <Persona.h>
#include <Varon.h>
#include <Mujer.h>
using namespace std;

int main()
{
    Varon x("Julio",36,true);
    Mujer y("Maria",20,10);
    y.getdesc();
    return 0;
}
