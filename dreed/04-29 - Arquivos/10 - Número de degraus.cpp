#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream entrada("entrada.txt");
    ofstream degraus("degraus.txt");

    float alturaDegrau, alturaObjetivo;
    entrada >> alturaDegrau >> alturaObjetivo;

    int numDegraus = ceil(alturaObjetivo * 100 / alturaDegrau);
    degraus << numDegraus;

    entrada.close();
    degraus.close();

    return 0;
}
