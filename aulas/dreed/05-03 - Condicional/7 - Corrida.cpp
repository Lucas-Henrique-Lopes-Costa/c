#include <iostream>
#include <cmath>
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

    int separa, tvPrimeiroInfo, tvUltimoInfo, qtdTotalVoltas, volta, contVoltaPrim = 0;
    float tvPrimeiro, tvUltimo, voltaPrimeiro = 0, voltaUltima = 0;
    bool naoRetardatario = true;

    cin >> separa >> tvPrimeiroInfo >> tvUltimoInfo >> qtdTotalVoltas;

    tvPrimeiro = ceil((1.0 / tvPrimeiroInfo) * 100) / 100;
    tvUltimo = ceil((1.0 / tvUltimoInfo) * 100) / 100;

    if (separa >= 0)
    {
        voltaPrimeiro = separa;
        volta = separa + 1;
    }
    else
    {
        voltaUltima = separa * (-1);
        volta = 1;
    }

    if (volta >= qtdTotalVoltas)
    {
        cout << -1 << endl;
        cout << -1 << endl;
    }
    else
    {
        contVoltaPrim = voltaPrimeiro;

        while (voltaPrimeiro < qtdTotalVoltas)
        {
            voltaPrimeiro += tvPrimeiro;
            voltaUltima += tvUltimo;

            if (voltaPrimeiro - 1 > voltaUltima and naoRetardatario)
            {
                cout << volta << endl;
                naoRetardatario = false;
            }

            if (contVoltaPrim != int(voltaPrimeiro))
            {
                volta++;
                contVoltaPrim = int(voltaPrimeiro);
            }
        }

        cout << round(voltaPrimeiro) - round(voltaUltima) << endl;
    }

    return 0;
}
