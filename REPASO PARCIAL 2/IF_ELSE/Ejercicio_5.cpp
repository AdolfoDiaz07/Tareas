#include <iostream>
using namespace std;

int main(){
int mes;
cout<<"Por favor, ingrese el dia del mes: ";
cin>>mes;

if(mes>0 && mes<=10){
    cout<<"El dia pertenece a la primera decada del mes";
}
else if(mes>10 && mes<=20){
    cout<<"El dia pertenece a la segunda decada del mes";
}
else if(mes>20 && mes<=31){
    cout<<"El dia pertenece a la tercera decada del mes";
}
else{
    cout<<"Dato erroneo";
}
    return 0;
}