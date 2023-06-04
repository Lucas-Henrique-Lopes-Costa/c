#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Desenvolva um programa que leia do dispositivo de entrada padrão um número inteiro N, uma lista contendo N palavras quaisquer e, por fim, uma letra isolada. Seu programa deverá exibir no dispositivo de saída padrão a quantidade total de palavras da lista de entrada que não apresentam nenhuma ocorrência da letra fornecida isoladamente.

    Entradas:

    Um número inteiro N, indicando a quantidade de palavras a serem fornecidas.
    Uma lista de N palavras (strings). Cada palavra será fornecida em uma lista diferente do dispositivo de entrada padrão.
    Uma letra.
    Saídas:

    Um número inteiro indicando a quantidade total de palavras da lista de entrada que não apresentam nenhuma ocorrência da letra fornecida isoladamente.
    Exemplo de Entrada:

    3
    bola
    arara
    fogo
    a
    Exemplo de Saída:

    1
    Exemplo de Entrada:

    5
    agua
    fogo
    ar
    ouro
    madeira
    a
    Exemplo de Saída:

    2
    Exemplo de Entrada:

    2
    janeiro
    fevereiro
    e
    Exemplo de Saída:

    0
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
  int cont, palavrasSemLetra = 0;

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
    if (cont == 0)
    {
      palavrasSemLetra++;
    }
  }

  cout << palavrasSemLetra << endl;

  return 0;
}
