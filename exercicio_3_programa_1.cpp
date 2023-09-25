#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    cout<<"Digite dois numeros inteiros: ";
    cin>>a>>b;
    c = a + b;
    cout<<"Soma de a e b em formato hexadecimal: "<<hex<<c<<endl;
    c = a * b;
    cout<<"Produto de a e b em formato octal: "<<oct<<c<<endl;
    c = a - b;
    cout<<"Diferenca entre a e b: ";
    c < 0 ? cout<<-c : cout<<c;
    cout<<endl;
    b <= 0 ? c = -1 : c = a / b;
    c == -1 ? cout<<"Impossivel realizar divisao por zero!" : cout<<"Quociente entre a e b: "<<c;
    cout<<endl;
    if(c > -1){
        a % b == 0 ? cout<<"a eh divisivel de forma exata por b, restando: "<<a % b 
        : cout<<"a nao eh divisivel de forma exata por b, restando: "<<a % b;
        cout<<endl;
    } else cout<<"b = 0. Impossivel checar divisao exata!"<<endl;

    return 0;
}