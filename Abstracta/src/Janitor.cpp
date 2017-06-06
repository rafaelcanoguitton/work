#include "Janitor.h"

Janitor::Janitor(string n,int y,int m,int d,int c)
{
    nombre=n;
    b.year=y;
    b.month=m;
    b.day=d;
    edad=b.gety();
    c=cl;
}
void Janitor::getdesc()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Fecha de nacimiento: ";
    b.getb();
    cout<<"Cometido: "<<cl<<endl;
}
Janitor::~Janitor()
{
    cout<<""<<endl;
}
