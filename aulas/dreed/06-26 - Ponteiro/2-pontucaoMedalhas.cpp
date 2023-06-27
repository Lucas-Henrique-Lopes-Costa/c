/*
O Comitê Olímpico Internacional (COI) resolveu criar uma tabela de pontuação das Olimpíadas para ser usada no lugar do Quadro de Medalhas. A ideia é que cada tipo de medalha (ouro, prata e bronze) tenha uma pontuação diferente. Assim, a pontuação de um time seria baseada na quantidade de medalhas recebidas e nessa pontuação.

O COI precisa definir qual será a pontuação de cada tipo de medalha e, para testar isso, pediu a você para fazer um programa que receba quantos pontos valem cada tipo de medalha e a quantidade de medalhas de um determinado país. Seu programa deverá então exibir a pontuação daquele país nessa tabela de pontuação proposta.

Para isso seu programa deve:

Guardar os pontos de cada tipo de medalha em memória alocada dinamicamente.
Criar um registro para guardar as quantidades de medalhas do país.
Usar alocação dinâmica para guardar o registro acima.

Entradas:
Três números inteiros representando quantos pontos valem os tipos de medalha (ouro, prata e bronze, nessa ordem).
Três números inteiros representando a quantidade de medalhas recebida por um determinado país (de ouro, de prata e de bronze, nessa ordem).

Saídas:
A pontuação do país na tabela proposta pelo COI.

Exemplo de Entrada:
10 5 1
2 2 2

Exemplo de Saída:
32
*/
#include <iostream>
using namespace std;

struct Paises
{
  int ouro;
  int prata;
  int bronze;
};


int main()
{
  int *medalhas = new int[3];

  for (int i = 0; i < 3; i++)
  {
    cin >> medalhas[i];
  }

  Paises *pais = new Paises;

  cin >> pais->ouro >> pais->prata >> pais->bronze;

  int soma = pais->ouro * medalhas[0] + pais->prata * medalhas[1] + pais->bronze * medalhas[2];
  
  cout << soma << endl;

  return 0;
}