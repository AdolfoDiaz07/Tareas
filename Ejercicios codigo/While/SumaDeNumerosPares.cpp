#include <iostream>
using namespace std;

int main()
{
    int Par, contador = 1, suma=0; //Aqui puse suma=0 porque si no lo ponia me salia un numero bien grande
    cout << "Ingresa un numero, el que quieras: " << endl;
    cin >> Par;

    while (contador <= Par) //Puse = porque si Par es Par tambien se cuenta
    {
        if (contador % 2 == 0)
        {
            suma = suma + contador;
        }
        contador++;
    }
    cout << "La suma total es: " << suma;
    return 0;
}