#include <iostream>
using namespace std;

int main(){
int num1, num2;
cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;

if(num1>num2){
    cout<<"El numero mayor es "<<num1;
}
else if(num1<num2){
    cout<<"El numero mayor es "<<num2;
}
else{
    cout<<"Los dos numeros son iguales";
}
    return 0;
}
