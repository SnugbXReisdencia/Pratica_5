#include <iostream>

using namespace std;

// segunda parte do exercicio 3, letra a e b
int main() {
    int valorInt;
    
    cout << "Digite um numero inteiro: ";
    cin >> valorInt;

    cout << "O valor fornecido e " << (valorInt > __SHRT_MAX__ ? "maior que um short int" : "este valor pertence ao intervalo dos short int") << endl;


    return 0;
}
