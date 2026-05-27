#include <iostream>
using namespace std;

int main(){
int edad;

cout<<"Por favor, ingrese su edad: ";
cin>>edad;

if(edad>=0 && edad<18){
cout<<"Eres menor de edad";
}
else if(edad>=18 && edad<60){
    cout<<"Eres adulto";
}
else if(edad>=60){
    cout<<"Eres un adulto mayor";
}
else{
    cout<<"Dato erroneo";
}
    return 0;
}