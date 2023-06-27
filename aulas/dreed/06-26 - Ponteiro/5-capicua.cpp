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
#include <fstream>
using namespace std;

int main()
{
  int tamanho;
  cin >> tamanho;
  int *digitos = new int[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    cin >> digitos[i];
  }

  bool capicua = true;
  int posicao = 0;

  if (tamanho == 0)
  {
    capicua = false;
  }

  if (tamanho == 1)
  {
    cout << 0 << " " << digitos[0];
  }

  else
  {
    while (posicao < (tamanho - 1) and capicua)
    {
      tamanho--;
      if (digitos[posicao] != digitos[tamanho])
      {
        capicua = false;
      }
      else
      {
        if (digitos[posicao] == digitos[tamanho])
        {
          cout << posicao << " " << digitos[posicao] << " " << tamanho << " " << digitos[tamanho] << " ";
        }
      }
      posicao++;
    }
  }

  if (capicua)
  {
    cout << endl << "sim" << endl;
  }
  else
  {
    cout << "nao" << endl;
  }

  delete[] digitos;

  return 0;
}