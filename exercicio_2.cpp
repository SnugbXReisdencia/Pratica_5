#include <iostream>
using namespace std;

int main(){

    char ch1, ch2, ch3;
    cout<<"Digite um caractere: ";
    cin>>ch1;

    isupper(ch1) ? cout<<"ch1 eh uma letra maiuscula" : cout<<"ch1 nao eh uma letra maiuscula";
    cout<<endl;
    islower(ch1) ? cout<<"ch1 eh uma letra minuscula" : cout<<"ch1 nao eh uma letra minuscula";
    cout<<endl;
    isdigit(ch1) ? cout<<"ch1 eh um digito" : cout<<"ch1 nao eh uma digito";
    cout<<endl;
    isalnum(ch1) ? cout<<"ch1 eh um caractere alphanumerico" : cout<<"ch1 eh outro tipo de caractere";
    cout<<endl;

    /*
        As funções isupper, islower, isdigit e isaplha pertencem à biblioteca cctype, que está
        incluída na biblioteca padrão da linguagem C++, portanto podem ser utilizadas sem a neces-
        sidade de importar a blblioteca cctype.
    */

   ch2 = 81;
   cout<<"********************************"<<endl;
   cout<<"ch2 nos formatos:"<<endl;
   cout<<"Decimal "<<dec<<ch2<<endl;
   cout<<"Octal "<<oct<<ch2<<endl;
   cout<<"Hexadecimal "<<hex<<ch2<<endl;
   cout<<"Caractere "<<(char) ch2<<endl;

    ch3 = tolower(ch2);
    cout<<"********************************"<<endl;
    cout<<"ch3 nos formatos:"<<endl;
    cout<<"Decimal "<<dec<<ch3<<endl;
    cout<<"Octal "<<oct<<ch3<<endl;
    cout<<"Hexadecimal "<<hex<<ch3<<endl;
    cout<<"Caractere "<<(char) ch3<<endl;

    return 0;
}