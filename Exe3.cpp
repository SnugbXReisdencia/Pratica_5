# include <iostream>
# include <climits>


using namespace std;

int main(){
    // A: Declare três variáveis de tipo int, vamos chamar de a, b e c mas
    // você pode escolher outro identificador se achar mais apropriado;
    int a, b, c;

    // B: Peça ao usuário para digitar dois números inteiros, obtenha-os da
    // entrada padrão, usando cin, e atribua os valores digitados às
    // variáveis a e b respectivamente;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;

    // C: Atribua a soma dos valores a e b a variável c e exiba o resultado em hexadecimal;
    c = a + b;
    cout << "A soma dos numeros " << a << " + " << b << " e : " << hex << c << " (resultado em Hexadecimal)" << endl;

    // D: Atribua à variável c o produto das variáveis a e b, imprima o
    // resultado na tela em formato octal;
    c = a * b;
    cout << "A multiplicacao dos numeros " << a << " * " << b << " e : " << oct << c << " (resultado em Octal)" << endl;

    // E: Atribua à variável c o módulo (valor absoluto) da diferença entre as
    // variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0
    // retorna -c, caso contrário retorna c)
    
    c = a - b;
    
    c < 0 ? cout << "A diferenca absoluta dos numeros " << a << " - " << b << " e : " << -c << endl 
    : cout << "A diferenca absoluta dos numeros " << a << " - " << b << " e : " << c << endl;

    // F: Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
    // na sua biblioteca padrão para obter este tipo de resposta de forma
    // direta;

    // Resposta: Sim tem o metodo abs() da biblioteca cmath. Segue abaixo o exemplo:
    cout << "A diferenca absoluta dos numeros " << a << " - " << b << " e : " << abs(c) << " resultado usando abs()." << endl; 

    // G: Atribua à variável c o quociente entre variáveis a e b, imprima o
    // resultado na tela; (se b for igual a zero a divisão não é possível e um
    // aviso deve ser apresentado ao usuário);
    
    if (b == 0)
    {
        cout << "Impossivel dividir por zero" << endl;
    }else{
        c = a / b;
        cout << "A divisao dos numeros " << a << " / " << b << " e : " << c << endl;
    }

    // H: Se a divisão anterior for possível, determinar se a é divisível de forma
    // exata por b, mostrar o resultado na tela;
    if (b == 0)
    {
        cout << "Impossivel dividir por zero" << endl;
    }else{
        if (a % b == 0)
        {
            cout << a << " e divisivel por " << b << endl;
        }else{
            cout << a << " nao e divisivel por " << b << endl;
        }
    }
    // 3.2 A: Peça ao usuário para fornecer um número inteiro, obtenha-o da
    // entrada padrão, usando cin, e armazene numa variável de tipo int;
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    // 3.2 B: Determine se o valor fornecido pode ser representado, sem perda de
    // informação, como um short int. Imprima na tela o valor
    // fornecido, seguido das palavras “e maior que um short int”
    // ou “este valor pertence ao intervalo dos short
    // int”. Use apenas o operador condicional (?).
    
    n > SHRT_MAX ? cout << "e maior que um short int" << endl :
        cout << "este valor pertence ao intervalo dos short int" << endl;

    return 0;
}