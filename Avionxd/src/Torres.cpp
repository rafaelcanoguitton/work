#include "Torres.h"
#include <iostream>
#include <Avion.h>
using namespace std;
Torres::Torres()
{
}
void Torres::agregar(Avion *c)
{
    testv.push_back(c);
}
Torres::~Torres()
{
    cout<<"Nuai"<<endl;
}
void Torres::recorrer()
{
    for (long i=0; i<(long)testv.size(); ++i) {
		Avion *l;
		l=testv.at(i);
		cout<<"Avion "<<i+1<<":"<<endl;
		l->getd();}
}
