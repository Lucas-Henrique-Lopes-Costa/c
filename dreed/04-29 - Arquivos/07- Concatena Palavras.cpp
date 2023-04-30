#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string arq1, arq2, arqu3, dado1, dado2;
    cin >> arq1 >> arq2 >> arqu3;

    ifstream arquivo1(arq1);
    arquivo1 >> dado1;

    ifstream arquivo2(arq2);
    arquivo2 >> dado2;

    string final = dado1 + " " + dado2;

    ofstream arquivoOut;
    arquivoOut.open(arqu3);
    arquivoOut << final << endl;
    arquivoOut.close();

    return 0;
}