#include <iostream>
#include <cctype>
using namespace std;

int main(){

    unsigned char informacaoGenetica[8];
    cout<<"Digite a informacao genetica da planta: ";
    cin>>informacaoGenetica;

    int genes = 0;
    for(char gene : informacaoGenetica){
        if(gene == '1') genes++;
    }
    cout<<"Quantidade de genes presentes: "<<genes<<endl;

    char posicao;
    cout<<"Digite um valor entre 1 e 8 para buscar por um gene em específico: ";
    cin>>posicao;
    int posicaoInt = posicao - '0';
    if(!isdigit(posicao) || posicaoInt < 1 || posicaoInt > 8){
        cout<<"Entrada invalida!";
    } else {
        if(informacaoGenetica[posicaoInt-1] == '0') cout<<"O gene "<<posicaoInt<<" nao esta presente na planta"<<endl;
        else cout<<"O gene "<<posicaoInt<<" esta presente na planta"<<endl;
    }


    return 0;
}