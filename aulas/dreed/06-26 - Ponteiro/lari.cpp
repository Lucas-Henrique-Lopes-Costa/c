#include <iostream>
using namespace std;

int *alocacao(int vet[], int& tam){

    int *novo = new int[tam + 5];
    copy(vet, vet + tam, novo);
    delete [] vet;
    tam += 5;

    return novo;
}

int main(){

    int qtd = 0, i = 0, capacidade = 5, transformacoes = 0;
    int *vetor = new int[capacidade];
    bool verifica = true;

    while(verifica){
        
        if(vetor[i] <= 0)

            verifica = false;
        
        if(qtd == capacidade){
            vetor = alocacao(vetor, capacidade);
            transformacoes++;
        }

        cin >> vetor[i];
        qtd++;
        i++;
    }

    for(i = 0; i < qtd; i++){

        if(vetor[i] > 0){

            cout << vetor [i] << " ";
        }
    }

    cout << endl << capacidade;
    cout << endl << transformacoes;

    delete [] vetor;

    return 0;
}