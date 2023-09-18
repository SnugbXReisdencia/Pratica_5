# include <iostream>
# include <cmath>

using namespace std;

void limpaTela_palse();
void palse();
void limpaTela();
void verificaSistemaOperacional();

int main() {
    verificaSistemaOperacional();
    // A: Declare três variáveis de tipo double, vamos chamar de x, y e z
    // mas você pode escolher outro identificador se achar mais apropriado;
    double x, y, z;

    // B: Peça ao usuário para digitar dois números reais, obtenha-os da entrada padrão,
    // usando cin, e atribua os valores digitados às variaveis x e y respectivamente;
    wcout << L"Considerando que x e y são coordenadas num plano cartesiano." << endl;
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // C: Considerando que x e y são coordenadas num plano cartesiano,
    // identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda,
    // direita ou na curva). Imprima o resultado na tela;
    
    if (5 * x + 2 > y) {
        cout << "O ponto esta acima da curva" << endl;
    } else if (5 * x + 2 < y) {
        cout << "O ponto esta abaixo da curva" << endl;
    } else {
        cout << "O ponto esta na curva" << endl;
    }

    // D: Atividade avançada: Atribua à variável z o valor da distância
    // euclidiana do ponto (x, y) ao centro de coordenadas; (distância
    // euclidiana se calcula como raiz quadrada de 𝑥 ao quadrado + y ao quadrado ,
    // (pesquise na biblioteca padrão como determinar a raiz quadrada de um número).
    
    // Resposta: Temos a biblioteca cmath da linguagem C++ que possui:
    // A função sqrt é utilizada para calcular a raiz quadrada de um número.
    // A função pow é utilizada para calcular o quadrado de um número.
    // Segue a implementação:
    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "A distancia euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas e: " << z << endl;

    // E: Atribua à variável z o produto entre as variáveis x e y, imprima o
    // resultado na tela em notação científica;
    z = x * y;
    ios_base::fmtflags flags = cout.flags(); // Armazena as configurações de formatação atuais
    cout << "A multiplicacao dos numeros " << x << " * " << y << " e : "<< scientific << z << " (resultado em notacao cientifica)" << endl;
    cout.flags(flags); // Restaura as configurações originais
    cout << "A multiplicacao dos numeros " << x << " * " << y << " e : "<< fixed << z << " (resultado em notacao cientifica)" << endl;
    cout.flags(flags); 
    
    // 4.2 A: leia da entrada padrão os valores reais dos coeficientes a, b e c, de um
    // polinômio de segundo grau do tipo 𝑝(𝑥) = 𝑎𝑥^2 + 𝑏𝑥 + 𝑐, e imprima:
    //      i. Se o polinômio tem uma, duas ou nenhuma raiz real (lembre
    // das suas aulas de segundo grau qual a condição que define
    // qual o número de raízes de um polinômio);
    //      ii. Se tiver raízes (uma ou duas) imprima o valor das mesmas. No
    // exercício anterior você deve ter descoberto como calcular a
    // raiz quadrada de um número;
    wcout << L"Calcule as raizes de um polinômio de segundo grau: " << endl;

    double a, b, c;
    double x1, x2, descriminante;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    descriminante = pow(b, 2) - 4 * a * c;

    if (descriminante > 0) {
        x1 = (-b + sqrt(descriminante)) / (2 * a);
        x2 = (-b - sqrt(descriminante)) / (2 * a);

        wcout << L"O polinômio possui duas raizes reais: " << endl;
        cout << "Raiz 1 = " << x1 << endl;
        cout << "Raiz 2 = " << x2 << endl;
    } else if (descriminante == 0) {
        x1 = -b / (2 * a);
        wcout << L"O polinômio possui uma raiz real: " << endl;
        cout << "Raiz = " << x1 << endl;
    } else {
        wcout << L"O polinômio não possui raizes reais." << endl;
    }

    // 4.2 B: Leia da entrada padrão um valor para x e imprima o valor de p(x);
    
    cout << "Calcule a funcao p(x) = ax^2 + bx + c: " << endl;
    double resu;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    
    cout << "Digite o valor de x: ";
    cin >> x;

    resu = a * pow(x, 2) + b * x + c;

    cout << "p(" << x << ") = " << a << " * " << x << "^2 + " << b << " * " << x << " + " << c << " = " << resu << endl;

    palse();
    return 0;
}

void verificaSistemaOperacional(){
    // Verifica o sistema operacional para não dar erro
    if (system("echo ''") != 0)
    {
        locale::global(locale(""));
        system("clear");
    }
    else
    {
        setlocale(LC_ALL, "Portuguese");
        system("cls");
    }
}

void palse(){
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.sync();
    cin.get();
    
}


void limpaTela(){
    system("echo ''") != 0 ? system("clear") : system("cls");
}

void limpaTela_palse(){
    palse();
    limpaTela();
}