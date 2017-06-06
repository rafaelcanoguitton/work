#include <iostream>
#include <Avion.h>
#include <Boing.h>
#include <Torres.h>
#include <vector>
using namespace std;

int main()
{
    Torres xd(500);
    Boing q(100,100,100),w(100,100,100),e(100,100,100);
    xd.agregar(&q);
    xd.agregar(&w);
    xd.agregar(&e);
    xd.recorrer();
    return 0;
}
//https://www.youtube.com/watch?v=yVUUSXwjeDs :3333333333
