#include <iostream>
#include <cmath> // sqrt() comando que retorna a raiz quadrada nesta biblioteca

using namespace std;
int main() {
    
   double x, y, z, fx; 

    cout << "digite um numero inteiro" << endl;
    cin >> x;

    cout << "digite um numero inteiro" << endl;
    cin >> y;

    fx = 5*x + 2;

    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") esta acima da curva f(x) = 5x + 2" << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") esta abaixo da curva f(x) = 5x + 2" << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") esta na curva f(x) = 5x + 2" << endl;
    }

     z = sqrt(x * x + y * y);
    cout << "A distancia euclidiana de " << x << ", " << y << " ao centro de coordenadas  " << z << endl;
 
    z = x * y;
    cout << "produto de x e y em notacao cientifica  " << scientific << z << endl;
   
    return 0;
}       