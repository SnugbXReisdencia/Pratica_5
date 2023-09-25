#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double x, y, z;
    cout<<"Digite dois numeros de ponto flutuante: ";
    cin>>x>>y;
    z = 5 * x + 2;

    if(y < z) cout<<"O ponto ("<<x<<", "<<y<<") esta a esquerda da curva"<<endl;
    else if(y > z) cout<<"O ponto ("<<x<<", "<<y<<") esta a direita da curva"<<endl;
    else cout<<"O ponto ("<<x<<", "<<y<<") esta na curva"<<endl;

    z = sqrt((x*x) + (y*y));
    cout<<"Distancia euclidiana do ponto ("<<x<<", "<<y<<"): "<<z<<endl;

    z = x * y;
    int potencia = 1;
    char sinal;
    if(z > 10){
        sinal = '+';
        do{
            z /= 10;
            potencia++;
        } while(z > 10);
    } else if(z < 1){
        sinal = '-';
        do{
            z *= 10;
            potencia++;
        } while(z < 0);
    }

    cout<<"Notacao cientifica do produto de x e y: "<<z<<" x 10 elevado a "<<sinal<<potencia<<endl;
    return 0;
}