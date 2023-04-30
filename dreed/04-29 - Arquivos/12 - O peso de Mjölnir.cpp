#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    ifstream arquivoIn("entrada.txt");

    float altura, largura, profundidade, densidade;
    arquivoIn >> altura >> largura >> profundidade >> densidade;

    cout << fixed << setprecision(1) << altura * largura * profundidade * densidade << endl;

    return 0;
}
