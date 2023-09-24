#include <iostream>

using namespace std;

// exerciocio 4, letra A, B, C
int main() {
    double x, y;
    
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    double z = 5 * x + 2;

    if (y < z) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y > z) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na curva f(x) = 5x + 2." << endl;
    }

    return 0;
}
