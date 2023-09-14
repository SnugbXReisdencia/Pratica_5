#include <iostream>

using namespace std;
int main() {
    
    int a, b, c;

    cout << "digite um numero inteiro" << endl;
    cin >> a;

    cout << "digite um numero inteiro" << endl;
    cin >> b;

    c = a+b;

    cout << "a soma de " << a << " + " << b << " = " << c <<  endl;

    cout << "a soma de " << a << " + " << b << " + " << c << " = " << a+b+c << " em hexadecimal = " << hex << int(a+b+c) << endl;

    c = a*b;

    cout << "o valor de C = " << c <<  " em octadecimal = " << oct << int(c) << endl;
    
    c = abs(a - b);
    cout << "Valor absoluto da diferenca entre a e b = " << c << endl;

    if (b != 0){
        c = a / b;
        cout << "Quociente de a por b = " << c << endl;       
    } else {
        cout << "A divisao por zero não e possivel " << endl;
    }

    if(a % b == 0){
        cout << "divisivel por b de forma exata " << endl;
    } else{
        cout << "A  nao e divisivel por B de forma exata " << endl;
    }


    return 0;
}