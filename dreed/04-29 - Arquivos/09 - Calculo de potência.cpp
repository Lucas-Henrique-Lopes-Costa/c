#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float comprimento, largura, area, potencia;
    const float potencia_m2 = 18.0;

    cin >> comprimento;
    cin >> largura;

    area = comprimento * largura;
    potencia = area * potencia_m2;

    ofstream arquivo("potencia.txt");
    arquivo << fixed << setprecision(1) << area << "m2" << endl;
    arquivo << fixed << setprecision(1) << potencia << "W" << endl;
    arquivo.close();

    return 0;
}
