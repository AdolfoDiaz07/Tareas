#include <iostream>
using namespace std;

int main(){
int nota;
cout<<"Por favor, ingresa la nota obtenida en el examen: ";
cin>>nota;

if(nota<=100 && nota>=90){
    cout<<"La nota obtenida fue excelente";
}
else if(nota<90 && nota>=75){
    cout<<"La nota onbtenida fue buena";
}
else if(nota<75 && nota>=60){
    cout<<"La nota obtenida fue regular";
}
else if(nota<60 && nota>=0){
    cout<<"La nota obtenida fue mala";
}
else{
    cout<<"Dato erroneo";
}
    return 0;
}