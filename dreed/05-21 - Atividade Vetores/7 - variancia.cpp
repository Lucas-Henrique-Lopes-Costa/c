#include <iostream>
using namespace std;

int main()
{
  /*
    Na teoria da probabilidade e na estatística, a variância de uma variável aleatória ou processo estocástico é uma medida da sua dispersão estatística, indicando "o quão longe" em geral os seus valores se encontram do valor esperado.

    Seja μ = M(X) a média aritmética de um conjunto X de valores, então variância do conjunto X é dada por Var(X) = M((x - μ)²) para todo valor x que pertence ao conjunto X. Ou, utilizando-se somatórios, pode-se escrever que:

    Faça um programa que lê um conjunto de números reais e calcula a sua variância.

    Entradas:

    A quantidade de valores a ser lida e
    cada valor do conjunto cuja variância deve ser calculada (números reais).
    Saídas:

    A variância do conjunto de valores.
    Exemplo de entradas:

    8
    10.3
    16.08
    12.15
    9.9
    9.9
    9.63
    10.03
    11.24
    Exemplo de saída:

    4.09065
  */

  // Ler a quantidade de valores a ser lida
  int quantidade;
  cin >> quantidade;

  // Ler cada valor do conjunto cuja variância deve ser calculada (números reais)
  float valores[quantidade];
  for (int i = 0; i < quantidade; i++)
  {
    cin >> valores[i];
  }

  // Calcular a média aritmética
  float media = 0;
  for (int i = 0; i < quantidade; i++)
  {
    media += valores[i];
  }
  media /= quantidade;

  // Calcular a variância
   // Calcular a soma dos quadrados das diferenças entre cada valor e a média
  float somaQuadrados = 0;

  for (int i = 0; i < quantidade; i++)
  {
    somaQuadrados += (valores[i] - media) * (valores[i] - media);
  }

  // Calcular a variância
  float variancia = somaQuadrados / quantidade;

  // Exibir a variância
  cout << variancia << endl;


  return 0;
}