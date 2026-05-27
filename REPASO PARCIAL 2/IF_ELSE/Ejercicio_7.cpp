#include <iostream>
using namespace std;

int main(){
int velocidad;
cout<<"Ingrese la velocidad del vehiculo: ";
cin>>velocidad;

if(velocidad>80){
    cout<<"Sobrepaso el limite de velocidad, por favor detengase";
}
else if(velocidad>=30 && velocidad<=80){
    cout<<"Dentro del limite de velocidad, prosiga";
}
else if (velocidad>0 && velocidad<30){
    cout<<"Muy lento, aumente la velocidad";
}
else{
    cout<<"Dato erroneo";
}
    return 0;
}