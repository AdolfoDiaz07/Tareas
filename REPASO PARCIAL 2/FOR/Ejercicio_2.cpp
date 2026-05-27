#include <iostream>
using namespace std;

int main(){
int N, potencia=2;
cout<<"Ingrese el numero de potencias que quiere hacer: ";
cin>>N;

for(int i=1;i<=N;i++){
    cout<<i<<"veces 2 = "<<potencia<<endl; 
    potencia=potencia*2;
}
    return 0;
}