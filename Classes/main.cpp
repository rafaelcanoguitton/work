#include <iostream>
#include <math.h>
#include "vector.h"

using namespace std;
int main()
{
    Vector vecxd;
    vecxd.start.x=1;
    vecxd.start.y=9;
    vecxd.endxd.x=4;
    vecxd.endxd.y=5;
    vecxd.impr();
    vecxd.module();
    vecxd.origin();
    vecxd.impr();
    return 0;
}
