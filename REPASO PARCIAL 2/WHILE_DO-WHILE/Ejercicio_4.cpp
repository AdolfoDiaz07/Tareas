#include <iostream>
using namespace std;

int main(){
int num,mayor=0;

do{
    cout<<"Ingresa un numero(0 para terminar el programa): ";
    cin>>num;
    
    if (num>mayor){
        mayor=num;
    }

}   while (num!=0);

cout<<"El mayor numero ingresado fue: "<<mayor;
    return 0;
}