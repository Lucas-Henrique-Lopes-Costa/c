#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, n6, n7, n8;

    ifstream arquivo;
    arquivo.open("dados.txt");

    arquivo >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    float media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;

    ofstream arquivoOut;
    arquivoOut.open("media.txt");
    arquivoOut << fixed << setprecision(3) << media << endl;
    arquivoOut.close();

    return 0;
}