#include <iostream>

using namespace std;
void hallarmcd();
int main()
{
    int t;
    cout << "Weno Mary aqui va xd: Ingresa lo solicitado y apreta enter." << endl;
    hallarmcd();
    cout<<"Apreta cualquier cosa y se cerrara el programa :v"<<endl;
    cin>>t;
    return 0;
}
void hallarmcd(){
    long long int x,y;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>y;
    long long int  mcd;
    for(int i=1;i<=x&&i<=y;i++){
    if(x%i==0 && y%i == 0 ){
    mcd=i;

   }

}
cout<<"MCD pe :v :"<<mcd<<endl;
}

