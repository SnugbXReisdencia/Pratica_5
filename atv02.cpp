#include <iostream>
#include <cctype> // bibliote para coverter letra maiusculae minuscula

int main() {
    char ch1, ch2, ch3;

   using namespace std; 

  
    cout << "Digite uma letra: ";
    cin >> ch1;

  
    bool maiuscula = isupper(ch1);
    bool minuscula = islower(ch1);
    bool digito = isdigit(ch1);

    cout << "A letra  e ";
    if (maiuscula) {
        cout << "uma letra maiuscula." << endl;
    } else if (minuscula) {
        cout << "uma letra minuscula." << endl;
    } else if (digito) {
        cout << "um digito." << endl;
    } else {
        cout << "outro tipo de caractere." << endl;
    }

   
    ch2 = 81;
    cout << ch2 << " em formato decimal: " << int(ch2) << endl;
    cout << ch2 << " em formato octal: " << oct << int(ch2) << endl;
    cout << ch2 << " em formato hexadecimal: " << hex << int(ch2) << endl;
    cout << ch2 << " como caractere: " << ch2 << endl;

  
    ch3 = tolower(ch2);
    cout << ch3 << " minuscula em formato decimal: " << int(ch3) << endl;
    cout << ch3 << " minuscula em formato octal: " << oct << int(ch3) << endl;
    cout << ch3 << " minuscula em formato hexadecimal: " << hex << int(ch3) << endl;
    cout << ch3 << " minuscula como caractere: " << ch3 << endl;

    return 0;
}
