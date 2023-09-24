#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, y, z_distance, z_product;
    
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Calcula a distância euclidiana
    z_distance = std::sqrt(x * x + y * y);

    // Calcula o produto entre x e y
    z_product = x * y;

    // Imprime a distância euclidiana
    std::cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas (0, 0) é: " << z_distance << std::endl;

    // Imprime o produto em notação científica
    std::cout << "O produto entre x e y em notação científica é: " << std::scientific << z_product << std::endl;

    return 0;
}
