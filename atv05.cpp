#include <iostream>


using namespace std;
int main() {
    
    unsigned char genes;
    int genesPresentes = 0;

    cout << "digite um um valor entre 0 e 255" << endl;
    cin >> genes;

    for (int i = 0; i < 8; ++i) {
       
        if (genes & (1 << i)) {
            genesPresentes++;
        }
    }
    cout << "Numero de genes presentes " << genesPresentes << endl;


    int geneEspecifico;
    cout << "Digite o  gene que deseja verificar numero de (1 a 8) " << end;
    cin >> geneEspecifico;

    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        if (genes & (1 << (geneEspecifico - 1))) {
            cout << "O gene " << geneEspecifico << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << geneEspecifico << " nao esta presente nesta planta." << endl;
        }
    } else {
        cout << "numero invalido deve ser  entre 1 e 8." << endl;
    }


    return 0;
}       