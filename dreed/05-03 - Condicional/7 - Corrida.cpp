#include <iostream>
using namespace std;

int main()
{
    int separacao, tempoPrimeiro, tempoUltimo, numVoltas, numVoltasRetardo = 0, numVoltasAtraso = 0;
    cin >> separacao >> tempoPrimeiro >> tempoUltimo >> numVoltas;

    // se o primeiro colocado largou atrás do último, inverte os tempos
    if (separacao < 0)
    {
        swap(tempoPrimeiro, tempoUltimo);
        separacao = -separacao;
    }

    // determina em quantas voltas o último colocado se tornará um retardatário
    if (tempoUltimo <= tempoPrimeiro)
    {
        numVoltasRetardo = -1;
    }
    else
    {
        numVoltasRetardo = (separacao + (numVoltas - 1) * tempoUltimo) / (numVoltas * (tempoUltimo - tempoPrimeiro));
    }

    // determina quantas voltas o último colocado ficou atrás do primeiro
    numVoltasAtraso = (separacao + numVoltasRetardo * numVoltas * (tempoUltimo - tempoPrimeiro)) / (tempoPrimeiro - tempoUltimo);

    cout << numVoltasRetardo << endl
         << numVoltasAtraso << endl;

    return 0;
}
