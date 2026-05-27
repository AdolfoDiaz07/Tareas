#include <iostream>
using namespace std;

int main(){
int est;
cout<<"Escoja un numero entre 1 y 4: ";
cin>>est;

switch (est)
{
    case 1:
    cout<<"La estacion escogida fue Primavera";
    break;

    case 2:
    cout<<"La estacion escogida fue Verano";
    break;

    case 3:
    cout<<"La estacion escogida fue Otono";
    break;

    case 4:
    cout<<"La estacion escogida fue Invierno";
    break;

    default:
    cout<<"El valor ingresado no se encuentra en el rango asignado";
    break;
}
    return 0;
}