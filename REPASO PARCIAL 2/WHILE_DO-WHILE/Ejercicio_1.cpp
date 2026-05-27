#include <iostream>
using namespace std;

int main(){
int contra;
cout<<"Por favor, ingrese una contrasena:"<<endl;
cin>>contra;

while (contra<=10000000)
{
    cout<<"La contrasena no es lo suficientemnte larga, porfavor aumentar el numero de digitos";
    cin>>contra;
}
cout<<"Contrasena valida, prosiga";
    return 0;
}