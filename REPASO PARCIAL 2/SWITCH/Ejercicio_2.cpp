#include <iostream>
using namespace std;

int main(){
int col;
cout<<"Escoja el color del cual quiere saber el significado emocional"<<endl;
cout<<"1. Rojo"<<endl;
cout<<"2. Verde"<<endl;
cout<<"3. Azul"<<endl;
cin>>col;

switch (col)
{
    case 1:
    cout<<"El rojose evoca emociones intensas y contradictorias, asociándose principalmente con la pasión, la energía vital, el amor y el deseo, pero también con la ira, la agresividad y el peligro.";
    break;

    case 2:
    cout<<"El verde evoca principalmente calma, equilibrio emocional, esperanza y renovación, actuando como un puente entre la mente y las emociones.";
    break;

    case 3:
    cout<<"El azul se asocia principalmente con la tranquilidad, la calma, la confianza y la seguridad emocional.";
    break;

    default:
    cout<<"Dato erroneo";
    break;
}
    return 0;
}