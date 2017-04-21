#include <iostream>

using namespace std;
int ejercicio2(int arr[],int contador,int length);
void ejercicio3();
string ejercicio4(string palabra,int contador,int length);
int main()
{
    string p,u;
    int x[4]={1,2,3,4};
    int y=ejercicio2(x,0,4);
    int q;
    cout<<y<<endl;
    ejercicio3();
    cout<<"Ingrese una palabra"<<endl;
    cin>>p;
    cout<<"Ingrese el tamaño de su palabra"<<endl;
    cin>>q;
    u=ejercicio4(p,q,q);
    cout<<u<<endl;
}
int ejercicio2(int arr[], int contador,int length)
{
    if(contador==length)
        return 0;
    return arr[contador]+ejercicio2(arr,contador+1,length);
}
void ejercicio3()
{
    int m1[2][2]= {{1,1},{2,3}};
    int m2[2][2]= {{4,5},{6,7}};
    int res[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
        {
                res[i][j]=m1[i][j]*m2[i][j];
        }

    }
    for(int i=0; i<2; i++)
    {
        for(int j=0;j<2;j++)
            cout<<res[i][j]<<" ";
    }
    cout<<""<<endl;
}
string ejercicio4(string palabra,int contador,int length)
{
    if (contador>=0)
        return palabra[contador]+ejercicio4(palabra,contador-1,length);
    else
        return +"";
}
