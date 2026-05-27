#include <iostream>
using namespace std;

int main(){
int mes;
cout<<"Por favor, ingrese el numero del mes que quiera saber cuantos dias tiene";
cin>>mes;

switch (mes)
{
    case 1:
    cout<<"El mes de Enero tiene 31 dias";
    break;

    case 2:
    cout<<"El mes de Febrero tiene 28 dias";
    break;

    case 3:
    cout<<"El mes de Marzo tiene 31 dias";
    break;

    case 4:
    cout<<"El mes de Abril tiene 30 dias";
    break;

    case 5:
    cout<<"El mes de Mayo tiene 31 dias";
    break;

    case 6:
    cout<<"El mes de Junio tiene 30 dias";
    break;

    case 7:
    cout<<"El mes de Julio tiene 31 dias";
    break;

    case 8:
    cout<<"El mes de Agosto tiene 31 dias";
    break;

    case 9:
    cout<<"El mes de Septiembre tiene 30 dias";
    break;

    case 10:
    cout<<"El mes de Octubre tiene 31 dias";
    break;

    case 11:
    cout<<"El mes de Noviembre tiene 30 dias";
    break;

    case 12:
    cout<<"El mes de Diciembre tiene 31 dias";
    break;

    default:
    cout<<"Dato erroneo";
    break;
}
    return 0;
}