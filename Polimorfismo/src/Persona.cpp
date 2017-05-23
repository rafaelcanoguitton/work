#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona(const string &name, const int age)
{
    nombre=name;
    edad=age;
}
void Persona::getdesc()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
