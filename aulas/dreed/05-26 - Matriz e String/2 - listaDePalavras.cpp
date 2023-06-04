#include <iostream>

using namespace std;

int main()
{
  /*
    Desenvolva um programa que leia do dispositivo de entrada padrão uma palavra P de cinco letras, um número inteiro N e uma lista contendo N palavras de cinco letras. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que tem o maior número de letras iguais às da palavra P na mesma posição. Obs.: considere que todas as palavras terão letras maiúsculas e que não possuem acentos.

    Caso ocorram empates entre múltiplas palavras de acordo com o critério citado, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade letras em comum na mesma posição.

    Entradas:

    Uma palavra P de cinco letras.
    Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
    Uma lista de N palavras (strings) de cinco letras. Cada palavra será fornecida em uma linha diferente do dispositivo de entrada padrão.
    Saídas:

    A palavra presente na lista de entrada que possui o maior número de letras iguais às da palavra P na mesma posição.
    Exemplo de Entrada:

    TERRA
    3
    PANDA
    VELHA
    FOGOS
    Exemplo de Saída:

    VELHA
    Exemplo de Entrada:

    PORTA
    5
    CORTA
    TROPA
    MORTA
    PERTO
    PRATO
    Exemplo de Saída:

    MORTA
    Exemplo de Entrada:

    SALVO
    2
    SALVO
    VALSA
    Exemplo de Saída:

    SALVO
  */

  // pegando a palavra
  string palavra;
  int n, palavraMaior, maior, cont;

  cin >> palavra >> n;

  // lendo a lista
  string lista[n];
  for (int i = 0; i < n; i++)
  {
    cin >> lista[i];
  }

  maior = 0;

  // comparando as letras
  for (int i = 0; i < n; i++)
  {
    cont = 0;
    for (int j = 0; j < 5; j++)
    {
      // i = palavra da lista e j = letra da palavra
      if (palavra[j] == lista[i][j])
      {
        cont++;
      }

      // encontrando a maior
      if (cont > maior)
      {
        maior = cont;
        palavraMaior = i;
      }

      // se tiver empate, pega o último
      if (cont == maior)
      {
        palavraMaior = i;
      }
    }
  }

  cout << lista[palavraMaior] << endl;

  return 0;
}
