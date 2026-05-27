#include <iostream>
using namespace std;

int main(){
int num, resultado=0;
cout<<"Por favor, ingrese un numero";
cin>>num;

resultado=num%4;

if(resultado==0){
    cout<<"El numero es multiplo de 4";
}
else{
    cout<<"El numero no es multiplo de 4";
}
    return 0;
}