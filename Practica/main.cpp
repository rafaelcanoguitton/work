#include <iostream>

using namespace std;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8(int *x,int *y);
void ejercicio9(int k[], int lenght);
void ejercicio12(int arr[],int t);
int ejercicio14(int array[],int x,const int y);
void ejercicio15();
int main()
{
    int c[5]={1,2,4,3,0};
    int x,g,h;
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    cout<<"Ingrese su primer numero para el intercambio (con punteros): "<<endl;
    cin>>g;
    cout<<"Ingrese su segundo numero para el intercambio : "<<endl;
    cin>>h;
    int *y=&g,*u=&h;
    ejercicio8(y,u);
    ejercicio9(c,5);
    cout<<"Array ordenado"<<endl;
    for(int i=0;i<5;i++)
        cout<<c[i]<<endl;
    ejercicio12(c,5);
    cout<<"Array invertido"<<endl;
    for(int i=0;i<5;i++)
        cout<<c[i]<<endl;
    x=ejercicio14(c,0,5);
    cout<<"La suma recursiva de los elementos de su array es: "<<x<<endl;
    ejercicio15();
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
void ejercicio7()
{
    int x,y;
    cout<<"Ingrese su primer numero para el intercambio: "<<endl;
    cin>>x;
    cout<<"Ingrese su segundo numero para el intercambio: "<<endl;
    cin>>y;
    int temp=x;
    x=y;
    y=temp;
    cout<<"El intercambio se realizo: "<<x<<" "<<y<<endl;
}
void ejercicio8(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"El intercambio se realizo: "<<*x<<" "<<*y<<endl;
}
void ejercicio9(int A[],int length)
{
	int temp, temp2;
	for (int i = 0; i < length; i++){
		temp= i;
		while (temp>0&&A[temp]<A[temp-1])
		{
			  temp2=A[temp];
			  A[temp] = A[temp-1];
			  A[temp-1] = temp2;
			  temp--;
        }
    }
}
void ejercicio12(int arr[],int t)
{
    int temp;
    for(int i=0; i<(t/2);i++)
    {
        temp = arr[i];
        arr[i]=arr[t-i-1];
        arr[t-i-1]=temp;
    }
}
int ejercicio14(int array[],int x,int y)
{
    if (x==y)
        return 0;
    else
        return array[x]+ejercicio14(array,x+1,y);
}
void ejercicio15()
{
    cout<<"Ingrese su palabra"<<endl;
    string x,temp;
    cin>>x;
    for(int i =x.size()-1;i>=0;i--)
        temp=temp+x[i];
    if(x==temp)
    {
        cout<<"Es palindromo"<<endl;
    }
    else
        cout<<"No es palindromo"<<endl;
}
