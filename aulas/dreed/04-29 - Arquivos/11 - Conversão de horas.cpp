#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float horas, minutos;
    cin >> horas >> minutos;

    ofstream arquivoOut("saida.txt");
    arquivoOut << horas * 60 << endl;
    arquivoOut << (horas * 60) + minutos << endl;
    arquivoOut << ((horas * 60) + minutos) * 60 << endl;

    return 0;
}
