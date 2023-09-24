#include <iostream>
#include <cmath>
#include <iostream>
#include<stdlib.h>

using namespace std;



int main(void){
    //Questão letra a  
    int a, b, c;


    //Questão letra b 
    cout << "Digite um valor: "; 
    cin >> a;

    cout << "Digite um valor: "; 
    cin >> b;

    //Questão letra c
    c = a + b;
    cout << c << " hexadecimal: " << hex << int(c) << endl; 

    //Questão letra d 
    cout << c << " octal: " << oct << int(c) << endl; 

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

