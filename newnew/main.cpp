#include <iostream>

using namespace std;

int main()
{   /*
    int c;
    int x;
    c=100000;
    x=c++;
    cout << c << endl;
    cout << x << endl;
    cout << ++c << endl;
    c=c-1 ;
    cout<< c << endl ;
    cout<<c--<<endl;
    cout<<--c<<endl;


    int i=0;
    cout << i<<endl;
    i= i+2;
    cout<<i<<endl;cout<<c--<<endl;

    i+=2;
    cout<<i<<endl;


    int z=0;
    int a=1;
    int b=2;
    int x=0;
    int y=1;
    int l=(x>y)?x:y;
    if (a>b)
        z=a;
    else
        z=b;
    cout << z << endl;
    cout << l<< endl;
    int x;
    int y;
    int c;
    cout<< "Ingrese su primer numero"<< endl;
    cin>>x;
    cout<<"Ingrese su segundo numero" << endl;
    cin>>y;
    c=(x>y)?x:y;
    cout<<"El mayor numero es: "<<endl;
    cout<< c<< endl;
    */
    int score[5];
    int c=5;

    score [0]=c++;
    score [1]=c++;
    score [2]=c++;
    score [3]=c++;
    score [4]=c++;
    cout << score[0]<<endl;
    cout << score[1]<<endl;
    cout << score[2]<<endl;
    cout << score[3]<<endl;
    cout << score[4]<<endl;
    return 0;
}
