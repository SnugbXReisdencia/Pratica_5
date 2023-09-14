# include <iostream>
# include <string>
# include <locale>

using namespace std;

int main(){
    //locale::global(locale(""));
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    char ch1, ch2, ch3;
    string tipo;

    cout << "Digite um caractere: ";
    cin >> ch1;

    tipo = isupper(ch1) ? "E uma letra Maiuscula." : islower(ch1) ? "E uma letra Minuscula." 
         : isdigit(ch1) ? "E um digito." :  "Outro caracter.";

    cout << tipo << endl;

    ch2 = 81;
    cout << "O caracter 81 e: " << ch2 << endl;
    cout << "O caracter 81 em Decimal e: " << dec << int(ch2) << endl;
    cout << "O caracter 81 em Octal e: " << oct << int(ch2) << endl;
    cout << "O caracter 81 em Hexadecimal e: " << hex << int(ch2) << endl;

    ch2 = 'A';
    ch3 = tolower(ch2);
    
    cout << "\nch2: " << ch2 << endl;
    cout << "ch3: " << ch3 << endl;

    cout << "A Letra 'a' em Decimal e: " << dec << int(ch3) << endl;
    cout << "A Letra 'a' em Octal e: " << oct << int(ch3) << endl;
    cout << "A Letra 'a' em Hexadecimal e: " << hex << int(ch3) << endl;
    cout << dec;
    

    return 0;
}