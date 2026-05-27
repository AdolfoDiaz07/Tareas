#include <iostream>
using namespace std;

int main(){
int dia;
cout<<"Ingrese el numero de dia de la semana que quiera saber: ";
cin>>dia;

switch (dia)
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    cout<<"El dia ingresado es dia de semana";
    break;

    case 6:
    case 7:
    cout<<"El dia ingresado es dia de fin de semana";
    break;

    default:
    cout<<"Dato erroneo";
    break;
}
    return 0;
}