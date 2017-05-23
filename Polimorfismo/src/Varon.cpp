#include "Varon.h"
#include <iostream>
#include "Persona.h"
using namespace std;
Varon::Varon(const string &name, const int age,const int calv_):Persona(name,age)
{
    nombre=name;
    edad=age;
    calvo=calv_;
}
void Varon::getdesc()
{
    string bul;
    if (calvo==true)
        bul="Si";
    else
        bul="No";
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Esta calvo: "<<bul<<endl;
}
