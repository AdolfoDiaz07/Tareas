#include <iostream>
using namespace std;

int main(){
int num, div=1;
cout<<"Ingrese un numero que se quiera dividir: ";
cin>>num;
cout<<"Los divisores son: ";
while (num>=div)
{
    if(num%div==0)
    {
        cout<<div<<endl;
    }
    div++;
}

    return 0;
}