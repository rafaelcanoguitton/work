#include <iostream>

using namespace std;
int suma(const int array[], int y);
int promedio(const int array[],int y);
void invertir(int array[],const int y);
int main()
{
    int x;
    cout<<"Ingrese su numero de elementos: "<<endl;
    cin>>x;
    int arr[x];
    for (int y=0;y<x;y++)
    {
        cout<<"Ingrese su valor: "<<endl;
        cin>>arr[y];
    }
    cout<<"La suma de los elementos de su arreglo es: "<<suma(arr,x)<<endl;
    cout<<"El promedio de su arreglo es: "<<promedio(arr,x)<<endl;
    cout<<"Su lista invertida es:"<<endl;
    invertir(arr,x);
    for (int t=0;t<x;t++)
        cout<<arr[t]<<endl;
    return 0;
}
int suma(const int array[],int y)
{
    int sum=0;
    for(int z=0;z<y;z++)
    {
        sum=sum+array[z];
    }
    return sum;
}
int promedio(const int array[],int y)
{
    return suma(array,y)/y;
}
void invertir(int array[],const int y)
{
    int ar[y],x=0;
    for(int z=y;z>0;z--,x++)
    {
        ar[z]=array[x];
    }
    for(int t=0;t<y;t++)
    {
        array[t]=ar[t];
    }
}
