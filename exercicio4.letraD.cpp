#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// exerciocio 4, letraD, E

int main() {
    double x, y, z_distance, z_product;
    
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;


    z_distance = sqrt(x * x + y * y);


    z_product = x * y;

    cout << "A distancia euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas (0, 0) e: " << z_distance << endl;


    cout << "O produto entre x e y em notacao cientifica e: " << scientific << z_product << endl;

    return 0;
}
