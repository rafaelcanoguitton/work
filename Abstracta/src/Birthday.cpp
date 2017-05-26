#include "Birthday.h"
#include <iostream>
using namespace std;
void Birthday::getb()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
int Birthday::gety()
{
    int temp=0;
    temp+=2017-year-1;
    if (month<=5)
        temp+=1;
    return temp;
}

