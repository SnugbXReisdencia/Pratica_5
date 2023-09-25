#include <iostream>
using namespace std;

int main(){

    double a, b, c;
    cout<<"Digite 3 valores de ponto flutuante: ";
    cin>>a>>b>>c;

    double delta = b * b - 4 * a * c;
    if(delta > 0) cout<<"O polinomio tem 2 raizes reais."<<endl;
    else if(delta == 0) cout<<"O polinomio tem 1 raiz real."<<endl;
    else cout<<"O polinomio nao tem raiz real."<<endl;
    cout<<"********************************"<<endl;
    
    int x;
    cout<<"Valor de x: ";
    cin>>x;
    cout<<"P(x): "<<a * x * x + b * x + c<<endl;

    return 0;
}