#include <iostream>
using namespace std;

int main(){
char cal;
cout<<"Ingrese la calificacion obtenida: ";
cin>>cal;

switch (cal)
{
    case 65:
    cout<<"La calificacion obtenida fue excelente";
    break;

    case 66:
    cout<<"La calificacion obtenida fue muy buena";
    break;

    case 67:
    cout<<"La calificacion obtenida fue buena";
    break;

    case 68:
    cout<<"La calificacion obtenida fue regular";
    break;

    case 69:
    cout<<"La calificacion obtenida fue baja";
    break;

    case 70:
    cout<<"La calificacion obtenida fue muy baja, reprobado";
    break;

    default:
    cout<<"No se encuentra dentro del rango de notas";
    break;
}
    return 0;
}