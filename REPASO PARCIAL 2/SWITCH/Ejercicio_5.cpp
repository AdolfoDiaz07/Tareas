#include <iostream>
using namespace std;

int main(){
float num1, num2,total=0;
int opc;
cout<<"Ingrese el primer numero de su operacion: ";
cin>>num1;
cout<<"Ingrese el segundo numero de su operacion: ";
cin>>num2;
cout<<"Eliga el tipo de operacion que quiera realizar con los numeros:"<<endl;
cout<<"1. Suma"<<endl;
cout<<"2. Resta"<<endl;
cout<<"3. Multiplicacion"<<endl;
cout<<"4. Division"<<endl;
cin>>opc;

switch (opc)
{
    case 1:
    total=num1+num2;
    cout<<"El resultado de la operacion fue: "<<total;
    break;

    case 2:
    total=num1-num2;
    cout<<"El resultado de la operacion fue: "<<total;
    break;

    case 3:
    total=num1*num2;
    cout<<"El resultado de la operacion fue: "<<total;
    break;

    case 4:
    total=num1/num2;
    cout<<"El resultado de la operacion fue: "<<total;
    break;

    default:
    cout<<"Esta opcion no es valida";
    break;
}
    return 0;
}