#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "bici.h"
using namespace std;

int main()
{
    Car honda("VY6-8YUO", "1999", "Uno bien chingon");
    Truck oieke("xdxd","No sabe :'v","xido","4x4");
    bici lamia(":vesbici","2017","rojito PASION");
    cout<<honda.getEstilo()<<endl;
    cout<<honda.getDesc()<<endl;
    cout<<oieke.getTraccion()<<endl;
    cout<<oieke.getDesc()<<endl;
    cout<<lamia.getColor()<<endl;
    return 0;
}
