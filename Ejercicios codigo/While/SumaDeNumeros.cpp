#include <iostream>
using namespace std;

int main(){
    int num, suma=0;
    cout<<"Bienvenido al sumador de numeros"<<endl;
    cout<<"Ingrese los numeros que quiera sumar, cuando termine ingrese 0"<<endl;
    cin>>num;

    while(num!=0){
        cout<<"Ingrese otro numero que quiera sumar:"<<endl;
        suma=suma+num;
        cin>>num;
    }
    cout<<"El resultado de la suma es: "<<suma;
    return 0;
}