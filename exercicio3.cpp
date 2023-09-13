#include <iostream>
#include <cmath>

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

    int num = a - b; 

    if (num < 0) {
        num = -num; 
    }
    cout << "O valor : " << num << endl;

    return 0;

}
