#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;
template <class T> class Stack;
template <class T>
Stack<T> operator +(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result = s1;

    for(unsigned i = 0; i < s1.items.size(); ++i) {
        result.items.push_back (s2.items [i]);
    }
    return result;
}
template <class T>
Stack<T> operator-(const Stack<T> &s1, const Stack<T> &s2)
{
    Stack<T> result =s1;
    for(int i=0; i<s1.items.size();++i){
        for (int j=0;j<s2.items.size();j++){
            if (s1.items[i]==s2.items[j])
                cout<<"rofl"<<endl;
                //s1.erase(i);
        }
    }
    return result;
};
template <class T>
Stack<T> operator<<(const Stack<T> &s1,const Stack<T> &s2)
{
    for (int i=0; i<s1.items.size();i++)
    {
        cout<<s1.items[i]<<endl;
    }
};
template <class T>
class Stack{

    friend Stack<T> operator +<>(const Stack<T> &s1, const Stack<T> &s2);
    friend Stack<T> operator -<>(const Stack<T> &s1, const Stack<T> &s2);
    friend Stack<T> operator <<<>(const Stack<T> &s1, const Stack<T> &s2);
    vector <T> items;
public:
    bool empty() const {return items.empty();}
    void push(const T &item) {items.push_back(item);}
    T pop()
    {
        T last = items.back();
        items.pop_back();
        return last;
    }
    /*void Mostrar(){
        for(int i = 0; i<items.size(); i++){
            cout<<items[i]<<endl;
        }
    }*/
};
int main()
{
    Stack<int> pila1,pila2;
    pila1.push(1);
    pila1.push(2);
    pila1.push(3);
    pila2.push(4);
    pila2.push(5);
    pila2.push(6);
    Stack<int> xd= pila1-pila2;
    // Stack<int> pilaResultado2 = pila1-pila2;
    cout<<xd<<endl;
    //pilaResultado2.Mostrar();
    return 0;

}
