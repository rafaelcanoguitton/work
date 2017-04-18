#include <iostream>

using namespace std;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
int ejercicio14(const int array,int x,const int y);
int main()
{
    int c[4]={1,2,3,4};
    int x;
    /*ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();*/
    x=ejercicio14(c,0,4);
    cout<<x<<endl;
    return 0;
}
void ejercicio1()
{
    float x;
    cout<<"Ingrese su valor en kilometros"<<endl;
    cin>>x;
    cout<<"Su valor en millas seria: "<<x*0.621371<<endl;
}
void ejercicio2()
{
    cout<<"Celcius                  Fahrenheit"<<endl;
    for(int i=0;i<301;i=i+20)
    {
        cout<<i<<"                              "<<(i*9/5)+32<<endl;
    }
}
void ejercicio3()
{
    int x=0;
    while(x!=-1)
    {
    cout<<"Ingrese un numero"<<endl;
    cin>>x;
    if(x%2==0)
        cout<<"Su numero es par"<<endl;
    else
        cout<<"Su numero es impar"<<endl;
    }
}
void ejercicio4()
{
    long long int x,y,z;
    cout<<"Ingrese una base"<<endl;
    cin>>x;
    cout<<"Ingrese una potencia"<<endl;
    cin>>y;
    z=x;
    for(int i=1;i<y;i++)
    {
        x=x*z;
    }
    cout<<x<<endl;
}
void ejercicio5()
{
    int x;
    while(x!=-1)
    {
    cout<<"Ingrese un numero"<<endl;
    cin>>x;
    if(x==0)
        cout<<"Cero"<<endl;
    else if(x==1)
        cout<<"Uno"<<endl;
    else if(x==2)
        cout<<"Dos"<<endl;
    else if(x==3)
        cout<<"Tres"<<endl;
    else if(x==4)
        cout<<"Cuatro"<<endl;
    else if(x==5)
        cout<<"Cinco"<<endl;
    else if(x==6)
        cout<<"Seis"<<endl;
    else if(x==7)
        cout<<"Siete"<<endl;
    else if(x==8)
        cout<<"Ocho"<<endl;
    else if(x==9)
        cout<<"Nueve"<<endl;
    else
        cout<<"Numero no permitido"<<endl;
    }
}
void ejercicio6()
{
    int y,z;
    string x;
    cout<<"Ingrese su operador"<<endl;
    cin>>x;
    cout<<"Ingrese su primer numero"<<endl;
    cin>>y;
    cout<<"Ingrese su segundo numero"<<endl;
    cin>>z;
    if(x=="+")
        cout<<"Su suma es: "<<y+z<<endl;
    if(x=="-")
        cout<<"Su resta es: "<<y-z<<endl;
    if(x=="*")
        cout<<"Su multiplicacion es: "<<y*z<<endl;
    if(x=="/")
        if (z==0)
            cout<<"No existe la division entre cero"<<endl;
        else
            cout<<"Su division es: "<<y/z<<endl;
}
int ejercicio14(int array,int x,int y)
{
    if (x==y)
        return 0;
    else
        return array[x]+ejercicio14(array,x+1,y);
}
