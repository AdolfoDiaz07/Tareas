#include <iostream>
using namespace std;

int main(){
int num, suma=0, digito=0;
cout<<"Ingrese un numero: ";
cin>>num;

do
{
    digito=num%10;
    suma+=digito;
    num=num/10;
} while(num>0);

cout<<"La suma total es: "<<suma;

    return 0;
}