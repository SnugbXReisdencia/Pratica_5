#include <iostream>
using namespace std;

int main(){

    int numero;
    cout<<"Digite um numero inteiro: ";
    cin>>numero;
    short int numeroShort = numero;
    numeroShort == numero ? cout<<"este valor pertence ao intervalo dos short int"
        : cout<<"e maior que um short int";
    cout<<endl;

    return 0;
}