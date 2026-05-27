#include <iostream>
using namespace std;

int main(){
int num;
cout<<"Por favor, ingrese un numero: ";
cin>>num;

if(num>0){
    cout<<"El numero es positivo";
}
else if(num<0){
    cout<<"El numero es negativo";
}
else{
    cout<<"El numero no es ni positivo ni negativo";
}
    return 0;
}