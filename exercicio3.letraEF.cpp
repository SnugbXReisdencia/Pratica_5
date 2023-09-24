#include <iostream>
#include <cmath>
#include <iostream>
#include<stdlib.h>

using namespace std;

// exercicio da letra E à letra F

int main(void){

    int a, b, c;


    cout << "Digite um valor: "; 
    cin >> a;

    cout << "Digite um valor: "; 
    cin >> b;


    //Questão letra e 
    c = a - b; 
    // uso do absoluto utilizando logica
    if (c < 0) {
        c = -c; 
    }
    cout << "O valor : " << c << endl;


    //Questão letra f
    int num = abs(c);

    cout << "O valor usando o abs(): " << num << endl;

    return 0;

}

