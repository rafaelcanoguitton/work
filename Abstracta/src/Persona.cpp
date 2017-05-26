#include "Persona.h"
#include <Birthday.h>
Persona::Persona(string n,int y,int m,int d)
{
    nombre=n;
    b.year=y;
    b.month=m;
    b.day=d;
    edad=b.gety();
}
Persona::~Persona()
{
    cout<<nombre<<"se murio :C"<<endl;

}
void Persona::getdesc()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Fecha de nacimiento: ";
    b.getb();
}
