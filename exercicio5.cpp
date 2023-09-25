#include <iostream>

using namespace std;

int main() {
    unsigned char infoGenetica;
    cout << "Digite a informacao genetica da planta (um numero entre 0 e 255): ";
    cin >> infoGenetica;

    int genesPresentes = 0;

    for (int i = 0; i < 8; i++) {
        if ((infoGenetica & (1 << i)) != 0) {
            genesPresentes++;
        }
    }

    cout << "Numero de genes presentes nesta planta: " << genesPresentes << endl;

    int geneEspecifico;
    cout << "Digite o numero do gene que voce deseja verificar (entre 1 e 8): ";
    cin >> geneEspecifico;


    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        bool presente = (infoGenetica & (1 << (geneEspecifico - 1))) != 0;
        if (presente) {
            cout << "O gene " << geneEspecifico << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneEspecifico << " nao esta presente nesta planta." << endl;
        }
    } else {
        cout << "Numero de gene invalido. Digite um valor entre 1 e 8." << endl;
    }

    return 0;
}
