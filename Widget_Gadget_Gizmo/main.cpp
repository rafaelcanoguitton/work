#include <iostream>
#include <vector>
#include <Widget.h>
#include <Gadget.h>
#include <Gizmo.h>
using namespace std;
void do_it(Widget *w){
    cout<< w->f()<<" ";
}

int main()
{
    vector <Widget *> widgets;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    widgets.push_back(&wid);
    widgets.push_back(&gad);
    widgets.push_back(&giz);
    for( size_t i=0; i<widgets.size();i++)
        do_it(widgets[i]);
    return 0;
}
