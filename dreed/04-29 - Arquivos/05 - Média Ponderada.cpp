#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, p1, p2, p3;

    ifstream arquivo;
    arquivo.open("notas.txt");

    arquivo >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;

    float mP = ( (n1 * p1) + (n2 * p2) + (n3 * p3) ) / (p1 + p2 + p3);

    ofstream arquivoOut;
    arquivoOut.open("final.txt");
    arquivoOut << fixed << setprecision(2) << mP << endl;
    arquivoOut.close();

    return 0;
}