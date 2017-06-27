#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
template <class P> class Cola;
template <class P>
Cola<P> operator+(const Cola<P> &c1, const Cola<P> &c2)
{
    Cola<P> result = c1;

    for(unsigned i = 0; i<c2.items.size(); i++){
        result.items.push_back(c2.items[i]);
    }
    return result;
}

template<class P>
ostream &operator<<(ostream &o,const Cola<P> &c1)
{
    for(unsigned i=0; i<c1.items.size();++i)
        o<<c1.items[i];
    return o;
}

template <class P>
class Cola{
    friend Cola<P> operator +<>(const Cola<P> &c1, const Cola<P> &c2);
    friend ostream &operator<<(ostream &o,const Cola<P> &c1);
    vector <P> items;
public:
    bool empty() const{return items.empty();}
    void push(const P &item) {items.push_back(item);}
    P pop(){
        P first = items.front();
        items.pop_back();
        return first;
    }
    void mostrar()
    {
        for(int i=0;i<items.size();i++)
            cout<<items[i]<<endl;
    }

};
int main()
{
    Cola <int> a,b;
    a.push(3);
    a.push(5);
    a.push(4);
    b.push(5);
    b.push(4);
    b.push(2);
    Cola<int> c = a+b;
    c.mostrar();
    cout<<c<<endl;



    return 0;
}
