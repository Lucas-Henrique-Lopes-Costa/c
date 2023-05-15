#include <iostream>
using namespace std;

int main()
{
    /*
        No automobilismo é bastante comum que o líder de uma prova, em determinado momento, ultrapasse o último colocado. O líder, neste momento, está uma volta à frente do ultimo colocado, que se torna, assim, um retardatário. Neste problema você deve determinar em quantas voltas o último colocado se tornará um retardatário e quantas voltas o mesmo ficou atrás do primeiro colocado ao fim da corrida.

        Você deve considerar que, inicialmente, eles estão separados por um determinado tempo, dado pelo usuário, sendo que, se negativo, significa que o primeiro colocado largou atrás do último. Além da distância entre o primeiro e o último colocado serão dados os tempos necessários para que o primeiro e o último colocado terminem uma volta, assim como a quantidade de voltas que devem ser completadas para o finalizar a corrida. Considere que uma nova volta se inicia sempre que o primeiro colocado cruza a linha de partida.

        Os dados, tanto de entrada quanto de saída, devem ser inteiros.

        Entradas:

        Tempo que separa o primeiro e o último colocado (se negativo significa que o primeiro colocado largou atrás do último)
        Tempo da volta do primeiro colocado.
        Tempo da volta do último colocado.
        Quantidade de voltas da corrida.
        Saídas:

        Quantidade de voltas necessárias para o último colocado se tornar um retardatário (caso o último colocado não se torne um retardatário deve ser imprimido o valor “-1”).
        Quantidade de voltas que o último colocado ficou atrás do primeiro.
        Exemplo de Entrada:

        -1
        1
        4
        5
        Exemplo de Saída:

        3
        3
    */

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
