#include<iostream>
using namespace std;

int main(){
int opcion=0;
cout<<"Bienvenido al menu, eliga una opcion"<<endl;
cout<<"1. Saludar"<<endl;
cout<<"2. Mensaje"<<endl;
cout<<"3. Salir"<<endl;
cin>>opcion;
while(opcion!=3){
    switch(opcion)
    {
        case 1:
        cout<<"Hola, que gusto verte de vuelta"<<endl;

        break;
        case 2:
        cout<<"Cuentame como ha sido tu dia, seguro fue divertido"<<endl;

        break;
        default:
        cout<<"Opcion no valida"<<endl;

        break;
    }
    cin>>opcion;
}
cout<<"Saliendo del menu";
    return 0;
}