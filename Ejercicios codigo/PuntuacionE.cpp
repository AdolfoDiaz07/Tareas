#include <iostream>
using namespace std;

int main()
{
    int puntaje;
    cout << "Ingresa tu puntuacion obtenido en el videojuego" << endl;
    cin >> puntaje;

    switch (puntaje)
    {
    case 5:
        cout << "Felicidades, obtuviste un puntaje perfecto";

        break;
    case 4:
        cout << "Excelente trabajo";

        break;
    case 3:
        cout << "Lo lograste";

        break;
    case 2:
        cout << "Mas suerte la proxima";

        break;
    case 1:
        cout << "Fallaste, Intentalo de nuevo";

        break;
    default:
        cout << "Dato incorrecto";

        break;
    }
    return 0;
}