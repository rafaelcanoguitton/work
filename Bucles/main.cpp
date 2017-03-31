#include <iostream>

using namespace std;

int main()
{
    /*
    int ar[4];
    int x,y;
    cout << "Ingrese su primera posicion: "<<endl;
    cin>> ar[0];
    cout << "Ingrese su segunda posicion: "<<endl;
    cin>> ar[1];
    cout << "Ingrese su tercera posicion: "<<endl;
    cin>> ar[2];
    cout << "Ingrese su cuearta posicion: "<<endl;
    cin>> ar[3];
    x=ar[0];
    ar[0]=ar[3];
    ar[3]=x;
    x=ar[1];
    ar[1]=ar[2];
    ar[2]=x;


    cout<<ar[0]<<endl;{
    cout<<ar[1]<<endl;
    cout<<ar[2]<<endl;
    cout<<ar[3]<<endl;

    int a=6;
    int b=4;
    while (a>b){
        cout<<a<<" "<<b<<endl;
        b++;

        }
    cout<<"Ingrese el tamaño de su arreglo: "<<endl;
    int x;
    cin>>x;
    int ar[x];
    for(int i=0; i<x; i++){
        cout << "Ingrese su numero: "<<endl;
        cin>> ar[i];
    }
     for(int i=0,x, y=3; i<2; i++,y--){
        x=ar[i];
        ar[i]=ar[y];
        ar[y]=x;
    }
    for(int i=0; i<4; i++){
        cout<<ar[i]<<endl;
        }

    cout<<"Ingrese el tamaño de su arreglo: "<<endl;
    int x;
    cin>>x;
    int ar[x];
     for(int i=0; i<x; i++){
        cout << "Ingrese su numero: "<<endl;
        cin>> ar[i];
    }
     for(int i=0,y=x,z=0; i<y; i++){
        z+=ar[i];
        if (y-1==i)
            cout<< "Su numero es: "<<z<<endl;
    }
    */
    cout<<"Ingrese el tamaño de su arreglo: "<<endl;
    int x;
    cin>>x;
    int ar[x];
     for(int i=0; i<x; i++){
        cout << "Ingrese su numero: "<<endl;
        cin>> ar[i];
    }
     for(int i=0,y=x,z=0; i<y; i++){
        if (ar[i]>z)
            z=ar[i];
        if (y-1==i)
            cout<< "Su numero es: "<<z<<endl;
    }
    return 0;
}
