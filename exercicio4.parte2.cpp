#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;
    

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;


    double delta = b * b - 4 * a * c;

    if (delta > 0) {

        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinomio tem duas raizes reais: x1 = " << x1 << " e x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x1 = -b / (2 * a);
        cout << "O polinomio tem uma raiz real (raiz dupla): x1 = " << x1 << endl;
    } else {
        cout << "O polinomio não possui raízes reais" << endl;
    }

    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double px = a * x * x + b * x + c;
    cout << "O valor de p(x) para x = " << x << " é " << px << endl;

    return 0;
}
