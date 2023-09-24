#include <iostream>
#include <cmath>
#include <iostream>
#include<stdlib.h>

using namespace std;

// exercicio da letra A à letra D

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


    return 0;

}

