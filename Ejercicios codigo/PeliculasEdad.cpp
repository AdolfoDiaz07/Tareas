#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Bienvenido a donde encontras peliculas segun tu edad, por favor ingresa tu edad, maximo 100" << endl;
    cin >> edad;
    if (edad >= 18 && edad <= 100)
    {
        edad = 1;
    }
    else if (edad >= 13 && edad < 18)
    {
        edad = 2;
    }
    else if (edad > 6 && edad < 13)
    {
        edad = 3;
    }
    else if (edad > 0 && edad <= 6)
    {
        edad = 4;
    }
    else
        cout << "Edad Invalida, ingresa de nuevo tu edad";

    switch (edad)
    {
    case 4:
        cout << "Te recomendamos peliculas clasificadas G";

        break;
    case 3:
        cout << "Te recomendamos peliculas clasificadas G y PG";

        break;
    case 2:
        cout << "Te recomendamos peliculas clasificadas G, PG y PG-13";

        break;
    case 1:
        cout << "Te recomendamos peliculas clasificadas G, PG, PG-13 y R";

        break;
    }
    return 0;
}