#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, n3, N;

    ifstream arquivoIn;

    arquivoIn.open("exercicios.txt");
    cout << "Lendo arquivo" << endl;
    arquivoIn >> N;
    arquivoIn.close();

    n1 = N / 100;
    n2 = (N % 100) / 10;
    n3 = (N % 100) % 10;

    cout << "A soma dos digitos desse numero e: " << n1 + n2 + n3 << endl;
    cout << "O produto e: " << n1 * n2 * n3 << endl;

    ofstream arquivoOut;

    arquivoOut.open("saida.txt");

    arquivoOut << n1 * n2 * n3 << endl;
    arquivoOut.close();

    return 0;
}