#include <iostream>

using namespace std;

int main()
{
    /*
    int x;
    int a;
    int b=0;
    cout<<"Ingrese hasta que numero quiere evaluar:"<<endl;
    cin>>x;
    for(int y=2;y<=x;y=y+1){
            a=0;
            for(int z=2;z<x;z+=1){
                if(y%z==0){
                    a=a+1;
                    }
            }
        if(a<2){
            b=b+1;
            cout<<"Primo "<<b<<" : "<<y<<endl;
            }
    }*/
    int a;
    int b=0;
    int l;
    int y=2;
    cout<<"Ingrese que numero primo quiere"<<endl;
    cin>>l;
    while(l!=b){
            a=0;
            y=y+1;
            for(int z=2;z<1000;z+=1){
                if(y%z==0){
                    a=a+1;
                    }
            }
        if(a<2){
            b=b+1;}
        if(a<2&l==b){
            cout<<"Primo "<<b<<" : "<<y<<endl;

        }

    }
    return 0;

}
