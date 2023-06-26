/*
Questão 15: Registros - Stormtroopers de cada planeta
Em uma galáxia muito distante, a Primeira Ordem decidiu pressionar seus recrutadores de Stormtroopers de cada planeta para conseguir aumentar rapidamente seu exército. Para fazer isso, eles resolveram fazer um levantamento a fim de descobrir de quais planetas vinham as maiores contribuições para suas tropas.

Você foi recrutado pelos generais para o levantamento e para isso deve fazer um programa que leia um vetor de registros com os dados dos Stormtroopers. Cada registro deve ter os campos: nome, planeta de origem e número de batalhas que o Stormtrooper participou. O programa deverá então calcular, para cada planeta, o número de Stormtroopers que vieram de lá e a quantidade média de batalhas que eles participaram (guardando essas informações de cada planeta em um registro). Por fim, o programa deverá exibir o vetor de registros com os dados dos planetas.

Obs1: os nomes dos planetas devem aparecer na ordem em que aparecem na entrada.

Obs2: nomes dos Stormtroopers e dos planetas não possuem espaço.

Obs3: para soluções em Python o programador deve utilizar uma estrutura de dados apropriada no lugar dos registros.

Entradas:

Quantidade de Stormtroopers que serão avaliados.
Sequência de valores para os registros de Stormtroopers, seguindo a ordem: nome, planeta de origem e número de batalhas.
Saídas:

Sequência dos valores dos registros de dados dos planetas, seguindo a ordem: nome do planeta, número de Stormtroopers e número médio de batalhas que eles participaram (separados por um único espaço).
Exemplo de entrada:

5
DX-578
Lothal
10
MB-223
Lothal
5
SP-475
Sullust
3
TK-626
Lothal
10
FN-2187
Unknown
4
Exemplo de saída:

Lothal 3 8.33333
Sullust 1 3
Unknown 1 4
*/

#include <iostream>
using namespace std;

struct Stormtrooper
{
  string nome;
  string planeta;
  int batalhas;
};

int main()
{
  int n;
  cin >> n;
  Stormtrooper viajante[n];

  int contTimes = 0;
  string times[n];

  for (int i = 0; i < n; i++)
  {
    cin >> viajante[i].nome;
    cin >> viajante[i].planeta;
    cin >> viajante[i].batalhas;

    bool existe = false;
    int j = 0;
    while (!existe and j < contTimes)
    {
      if (times[j] == viajante[i].planeta)
      {
        existe = true;
      }
      j++;
    }

    if (!existe)
    {
      times[contTimes] = viajante[i].planeta;
      contTimes++;
    }
  }

  for (int i = 0; i < contTimes; i++)
  {
    cout << times[i] << " ";
    int contViajantes = 0;
    int somaBatalhas = 0;
    for (int j = 0; j < n; j++)
    {
      if (times[i] == viajante[j].planeta)
      {
        contViajantes++;
        somaBatalhas += viajante[j].batalhas;
      }
    }

    cout << contViajantes << " ";
    cout << (float)somaBatalhas / (float)contViajantes << endl;
  }

  return 0;
}