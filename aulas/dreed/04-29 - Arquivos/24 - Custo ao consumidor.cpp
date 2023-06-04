#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float precoF, percentualLucro, percentualImposto;
    ifstream arquivoIn("dados.txt");
    arquivoIn >> precoF >> percentualLucro >> percentualImposto;

    float valorLucro = precoF * percentualLucro;
    float valorImposto = precoF * percentualImposto;
    float valorCarro = valorLucro + valorImposto + precoF;
    
    ofstream arquivoOut;
    arquivoOut.open("custo.txt");
    arquivoOut << fixed << setprecision(2) << valorLucro << endl << valorImposto << endl << valorCarro << endl;
    arquivoOut.close();

    return 0;
}