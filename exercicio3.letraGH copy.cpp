#include <iostream>

using namespace std;


// exercicio 3 , letra G e H 

int main() {
    int a, b, c;
    
    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    if (b == 0) {
        cout << "A divisao por zero nao e possivel." << endl;
    }else if (a % b == 0) {
        cout << "valor exato " << a << " por " << b << " e: " << c << endl;
    } else {
        c = a / b;
        cout << "O quociente de " << a << " por " << b << " e: " << c << endl;
    }

    return 0;
}