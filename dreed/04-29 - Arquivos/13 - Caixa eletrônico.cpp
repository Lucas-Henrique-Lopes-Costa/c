#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    float entrada;

    cin >> entrada;

    int nota100 = entrada / 100;
    int nota50 = (entrada - nota100 * 100) / 50;
    int nota10 = (entrada - nota100 * 100 - nota50 * 50) / 10;

    ofstream arquivoOut("saque.txt");
    arquivoOut << nota100 << endl;
    arquivoOut << nota50 << endl;
    arquivoOut << nota10 << endl;

    return 0;
}
