#include <iostream>
using namespace std;

int main(){
int pago, horas, resultado=0;

cout<<"Bienvenido al calculador de salario, porfavor ingrese la cantidad de horas que trabajo: ";
cin>>horas;
cout<<"Ahora ingrese el pago por hora: ";
cin>>pago;

if(horas<=40 && horas>0)
{
    resultado=horas*pago;
    cout<<"El salario obtenido fue de: "<<resultado;
}
else if(horas>40)
{
    resultado=horas*(pago*1.5);
    cout<<"El salario obtenido fue de: "<<resultado;
}
else
{
    cout<<"Dato erroneo";
}
    return 0;
}