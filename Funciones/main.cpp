#include <iostream>

using namespace std;
int suma(const int array[], int y);
int promedio(const int array[],int y);
void invertir(int array[],const int y);
void ordenar(int array[],const int y);
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
    ordenar(arr,x);
    cout<<"Su lista ordenada es:"<<endl;
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
    int temp;
    for(int i=0; i<(y/2);i++)
    {
        temp = array[i];
        array[i]=array[y-i-1];
        array[y-i-1]=temp;
    }
}
void ordenar(int array[],const int y)
{
    for(int j=1;j<y;j++)
    {
        int temp=array[j];
        int i = j-1;
        while(i>-1 and array[i]>temp)
        {
            array[i+1]=array[i];
            i=i-1;
        }
        array[i+1]=temp;

    }
}
