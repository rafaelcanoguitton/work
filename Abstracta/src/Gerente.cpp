#include "Gerente.h"
#include "Persona.h"
#include "Birthday.h"
Gerente::Gerente(string n,int y,int m,int d,int i)
{
    nombre=n;
    b.year=y;
    b.month=m;
    b.day=d;
    edad=b.gety();
    ingresos=i;
}
void Gerente::getdesc()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Fecha de nacimiento: ";
    b.getb();
    cout<<"Ingresos: $"<<ingresos<<endl;
}
Gerente::~Gerente()
{
    cout<<""<<endl;
}
