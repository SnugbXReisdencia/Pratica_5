#include <iostream>
#include <climits>  // biblioteca que pega o valor máximo de um short int 

using namespace std;
int main() {
    
    int a, b, c;

    cout << "digite um numero inteiro" << endl;
    cin >> a;

    cout << " O numero " << a << (a > SHRT_MAX ? " e maior que um short int" : "este valor pertence ao intervalo dos short int") << endl;
 


    return 0;
}       