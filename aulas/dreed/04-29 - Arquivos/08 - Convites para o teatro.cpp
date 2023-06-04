#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float custo, precoConvite;

    ifstream arquivo;
    arquivo.open("teatro.txt");
    arquivo >> custo >> precoConvite;

    float numeroConvite = ceil(custo / precoConvite);

    ofstream arquivoOut;
    arquivoOut.open("convite.txt");
    arquivoOut << numeroConvite << endl;
    cout << numeroConvite << endl;
    arquivoOut.close();

    return 0;
}