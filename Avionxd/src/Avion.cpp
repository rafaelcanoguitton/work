#include "Avion.h"
#include <iostream>
using namespace std;
Avion::Avion(int p,int t)
{
    peso=p;
    tamano=t;
}
Avion::Avion()
{
    peso=0;
    tamano=0;
}
void Avion::getd()
{
    cout<<"El avion pesa: "<<peso<<"Kg mide: "<<tamano<<"cmxd"<<endl;
}
Avion::~Avion()
{
    cout<<"Se cayo el avioncito xd"<<endl;
}
