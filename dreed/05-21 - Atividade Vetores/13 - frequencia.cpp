#include <iostream>
using namespace std;

int main()
{
  /*
    Um jogador de RPG gostaria de saber se seu D6 (dado de seis lados) está viciado. Para tanto, ele jogou o dado 20 vezes e registrou os resultados obtidos em cada jogada. Faça um programa que receba os resultados das vinte jogadas e exiba no dispositivo de saída padrão a frequência com que cada um dos valores possíveis apareceu. A saída deve seguir o padrão face do dado: frequência.

    Entradas:

    Sequência de 20 valores inteiros no intervalo [1,6].
    Saídas:

    Relação da frequência de cada lado do dado.
    Exemplo de entrada:

    4 4 5 5 6 2 3 4 3 2 1 2 5 6 5 4 3 2 4 2
    Exemplo de saída:

    1: 0.05
    2: 0.25
    3: 0.15
    4: 0.25
    5: 0.2
    6: 0.1
  */

  // criando o vetor
  int vetor[20];

  // lendo os valores
  for (int i = 0; i < 20; i++)
  {
    cin >> vetor[i];
  }

  // criando o vetor de frequências
  int frequencias[6];

  // zerando o vetor de frequências
  for (int i = 0; i < 6; i++)
  {
    frequencias[i] = 0;
  }

  // preenchendo o vetor de frequências
  for (int i = 0; i < 20; i++)
  {
    frequencias[vetor[i] - 1]++;
  }

  // exibindo o vetor de frequências
  for (int i = 0; i < 6; i++)
  {
    cout << i + 1 << ": " << frequencias[i] / 20.0 << endl;
  }

  return 0;
}