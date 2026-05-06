#include <iostream>
using namespace std;

int main()
{
    int letra;
    char Inicioapellido;
    cout<<"Porfavor, ingresa la incial de tu appellido:"<<endl;
    cin>>Inicioapellido;
    Inicioapellido = toupper(Inicioapellido);
    if (Inicioapellido >= 'A' && Inicioapellido <= 'M')
    {
        letra = 1;
    }
    else if (Inicioapellido > 'M' && Inicioapellido <= 'Z')
    {
        letra = 2;
    }
    else
    {
        cout<<"Caracter invalido";
    }
    switch (letra)
    {
        case 1:
        cout<<"Perteneces al Grupo 1";

        break;
        case 2:
        cout<<"Pertenece al Grupo 2";

        break;
    }
    return 0;
}