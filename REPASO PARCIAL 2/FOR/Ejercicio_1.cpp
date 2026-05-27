#include <iostream>
using namespace std;

int main(){
    int suma=0;
cout<<"A continuacion se mostrara la suma de los numero impares entre 1 y 50"<<endl;

for(int i=1;i<=50;i+=2){
    suma+=i;
}
cout<<suma;
    return 0;
}