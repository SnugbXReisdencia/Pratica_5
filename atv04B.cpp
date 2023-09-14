#include<iostream>
#include<cmath> // sqrt() comando que retorna a raiz quadrada neta biblioteca
using namespace std;

int main(){
    double a, b, c, delta, raiz, raiz1, raiz2;

    cout << "digite um numero" << endl;
    cin >> a;

    cout << "digite um numero" << endl;
    cin >> b;

    cout << "digite um numero" << endl;
    cin >> c;

    delta = b*b -4 * a * c;

     if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "possui tem duas raizes reais distintas " << endl;
        cout << "Raiz 1 " << raiz1 << endl;
        cout << "Raiz 2 " << raiz2 << endl;
    } 
    else if (delta == 0) {    
        double raiz = -b / (2 * a);
        cout << "posuui  uma raiz real " << endl;
        cout << "Raiz " << raiz << endl;
    } 
    else {
        cout << "nao possui raiz real " << endl;
    }
    double x;
    cout << "digite um numero de x" << endl;
    cin >> x;
    x = a*x*x + b*x +c ;
    cout << "o valor de p(x) = " << x << endl; 
    return 0;
}