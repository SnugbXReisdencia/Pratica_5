#include <iostream>
#include <cfloat>
#include <cctype>

using namespace std;


int main(void){
    //Questão letra a, b, c   
    char ch1, ch2, ch3;
    string retorno;
    
    cout << "Digite algo: "; 
    cin >> ch1;

    retorno = isupper(ch1) ? "maiuscula: ": islower(ch1) ? "minusculo:" : isdigit(ch1) ? "digito" : "outro tipo"; 
    cout << retorno << endl;


    //Questão letra d, e  
    ch2 = '81';

    cout << "O valor " << ch2 << " corresponde ao valor em hexadecimal " << hex << int(ch2)<< endl;
    cout << "O valor " << ch2 << " corresponde ao valor octal " << oct<< int(ch2)<< endl;
    cout << "O valor " << ch2 << " corresponde ao valor decimal " << dec<< int(ch2)<< endl;
    cout << "============================================================================" << endl;


    ch2 = 'T';
    ch3 = tolower(ch2);

    cout << "A letra " << ch2 << " corresponde ao valor em hexadecimal " <<  int(ch3)<< endl;
    cout << "A letra " << ch2 << " corresponde ao valor em hexadecimal " << hex << int(ch3)<< endl;
    cout << "A letra " << ch2 << " corresponde ao valor octal " << oct<< int(ch3)<< endl;
    cout << "A letra " << ch2 << " corresponde ao valor decimal " << dec<< int(ch3)<< endl;

    cout << ch2 <<" : "<<ch3 << endl;
    return 0;

}