#include "Mujer.h"
#include <iostream>
#include "Persona.h"
using namespace std;
Mujer::Mujer(const string &name, const int age,const int score):Persona(name,age)
{
    nombre=name;
    edad=age;
    puntaje=score;
}
void Mujer::getdesc()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Puntaje: "<<puntaje<<"/10"<<endl;
}
