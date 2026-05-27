#include <iostream>
using namespace std;

int main(){
int cod;
cout<<"Ingrese un codigo (del 1 al 5): ";
cin>>cod;

switch (cod)
{
    case 1:
    cout<<"Eres Admin";
    break;

    case 2:
    cout<<"Eres Editor";
    break;

    case 3:
    cout<<"Eres Viewer";
    break;

    case 4:
    cout<<"Eres Comentarista";
    break;

    case 5:
    cout<<"Eres Patrocinador";
    break;

    default:
    cout<<"El dato ingresado no se encuentra dentro del rango";
    break;
}
    return 0;
}