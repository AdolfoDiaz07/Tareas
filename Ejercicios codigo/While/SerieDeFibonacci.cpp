#include <iostream>
using namespace std;

int main(){
int num, contador=2, anterior=0, actual=1, nuevo;
cout<<"Bienvenido al calculador de Fibonacci, porfavor, ingrese el termino que quiere conocer"<<endl;
cin>>num;

while(contador<num){
    nuevo=anterior+actual;
    anterior=actual;
    actual=nuevo;
    contador++;
}
cout<<"El termino de la serie es "<<nuevo;
    return 0;
}