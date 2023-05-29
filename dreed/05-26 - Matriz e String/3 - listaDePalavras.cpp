#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a palavra contida na lista de entrada que contém a maior quantidade de ocorrências da letra fornecida isoladamente na entrada de dados.

    Caso ocorra embates entre múltiplas palavras com a maior quantidade de ocorrências da letra indicada, seu programa deverá exibir apenas a última palavra da lista de entrada que apresentou a referida quantidade máxima de ocorrências daquela letra.

    Entradas:

    Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
    Uma lista de N palavras (strings). Cada palavra será fornecida em uma lista diferente do dispositivo de entrada padrão.
    Uma letra.
    Saídas:

    A palavra presente na lista de entrada que possui a maior quantidade de ocorrências da letra indicada isoladamente na entrada.
    Exemplo de Entrada:

    3
    bola
    arara
    fogo
    a
    Exemplo de Saída:

    arara
    Exemplo de Entrada:

    5
    agua
    fogo
    ar
    terra
    madeira
    a
    Exemplo de Saída:

    madeira
    Exemplo de Entrada:

    2
    janeiro
    fevereiro
    e
    Exemplo de Saída:

    fevereiro
  */

  // leitura dos dados
  int n;
  cin >> n;

  string palavras[n];
  for (int i = 0; i < n; i++)
  {
    cin >> palavras[i];
  }

  char letra;
  cin >> letra;

  // processamento
  int maior = 0, cont, palavraEscolhida;

  for (int i = 0; i < n; i++)
  {
    cont = 0;

    for (long unsigned j = 0; j < palavras[i].size(); j++)
    {
      if (palavras[i][j] == letra)
      {
        cont++;
      }
    }
    if (cont > maior)
    {
      maior = cont;
      palavraEscolhida = i;
    }

    // se for igual a quantidade, exibe a última
    if (cont == maior)
    {
      palavraEscolhida = i;
    }
  }

  cout << palavras[palavraEscolhida] << endl;

  return 0;
}
