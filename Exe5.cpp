#include <iostream>
#include <limits>

using namespace std;

void limpaTela_palse();
void palse();
void limpaTela();
void verificaSistemaOperacional();

int main()
{
    verificaSistemaOperacional();

    // 5: Uma pesquisa monitora 8 genes de uma planta para avaliar como cada um
    // deles influencia na resposta a uma determinada praga. Os pesquisadores
    // optaram por representar a informação dos genes de cada planta com um
    // inteiro sem sinal, onde cada bit da representação binária identifica se um
    // gene está presente (1) ou não (0) naquela planta. Implemente um programa
    // que:
    // a. Leia a informação genética de uma planta na forma de um caractere
    // sem sinal (unsigned char);
    // b. Utilizando os operadores bit a bit identifique quantos, dos genes
    // estudados, estão presentes;
    // c. Solicite do usuário a informação sobre qual gene específico ele que
    // informação (um valor inteiro entre 1 e 8) e retorne se este gene se
    // encontra nesta planta.

    unsigned char gene;
    int genesPresentes, contadorGenes;

    do
    {
        contadorGenes = 0;
        
            cout << "Digite o gene da planta (Um caractere sem sinal): ";
            cin >> gene;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
        

        // B: Utilizando os operadores bit a bit identifique quantos, dos genes estudados, estão presentes;
        for (int i = 0; i < 8; i++)
        {
            if ((gene & (1 << i)) != 0)
            {
                contadorGenes++;
            }
        }

        cout << "Dus genes catalogados essa planta "<< gene << " possui: " << contadorGenes << " genes" << endl;

        // C: Solicite do usuário a informação sobre qual gene específico ele que informação (um valor inteiro entre 1 e 8) e retorne se este gene se encontra nesta planta.
        
        cout << "Qual gene deseja saber se esta presente (entre 1 e 8) :";
        cin >> genesPresentes;

        if (genesPresentes > 0 && genesPresentes < 9)
        {
            (gene & (1 << (genesPresentes - 1))) != 0 ? cout << "O gene " << genesPresentes << " esta presente" << endl : cout << "O gene " << genesPresentes << " nao esta presente" << endl;
        }
        else
        {
            cout << "O gene " << genesPresentes << " nao foi cadastrado" << endl;
        }
        cout << "Para sair digite -1 ou qualquer outro numero para continuar: " << endl;
        cin >> genesPresentes;
        limpaTela();  
    } while (genesPresentes != -1);
    return 0;
}

void verificaSistemaOperacional()
{
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

void palse()
{
    cout << "\nPressione a tecla Enter para continuar...\n";
    cin.sync();
    cin.get();
}

void limpaTela()
{
    system("echo ''") != 0 ? system("clear") : system("cls");
}

void limpaTela_palse()
{
    palse();
    limpaTela();
}