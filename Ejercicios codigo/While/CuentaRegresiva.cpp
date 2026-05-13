#include <iostream>
using namespace std;

int main(){
int num;
cout<<"Ingrese el numero en el que quiera empezar la cuenta regresiva"<<endl;
cin>>num;

while(num>0){
    cout<<num<<endl;
    num--;
}
cout<<num<<" Fin de la cuenta regresiva";
    return 0;
}