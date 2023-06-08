#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float valor, prestacoes;
    ifstream arquivoIn("venda.txt");
    arquivoIn >> valor >> prestacoes;

    float valorAntigo = valor * 1.1;
    float prestacaoAntigo = valor * 1.1 / (float)prestacoes;
    float valorPrestacoes = valor * 0.99 / (float)prestacoes;
    float valorAtual = valor * 0.99;

    ofstream arquivoOut;
    arquivoOut.open("cliente.txt");
    arquivoOut << fixed << setprecision(2) << valorAntigo << endl
               << prestacaoAntigo << endl
               << valorPrestacoes << endl
               << valorAtual << endl;
    arquivoOut.close();

    return 0;
}