#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa com um vetor de tamanho n que irá receber um conjunto de caracteres. O tamanho n deverá ser lido antes dos caracteres. O programa deve ler mais 2 caracteres que servirão como marcadores. O programa, então, deverá escrever os caracteres do conjunto que estão entre os dois caracteres digitados como marcadores.

    Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo.

    Obs: para soluções em Python utilize as listas padrões da linguagem ao invés de vetores.

    Entrada:

    Tamanho n do vetor.
    Linha contendo os caracteres do vetor (separados entre si por espaço).
    Linha contendo os dois caracteres delimitadores (separados entre si por espaço).
    Saídas:

    Caracteres do vetor entre os delimitadores.
    Exemplo de entrada:

    6
    A B C D E F
    C F
    Exemplo de saída:

    D E
  */

  // lendo o tamanho do vetor
  int n;
  cin >> n;

  // lendo os caracteres do vetor
  char vetor[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  // lendo os marcadores
  char marcador1, marcador2;
  cin >> marcador1 >> marcador2;

  // verificando qual marcador vem primeiro
  int posicaoMarcador1 = -1;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] == marcador1)
    {
      posicaoMarcador1 = i;
    }
  }

  // lendo posicao do marcador 2
  int posicaoMarcador2 = -1;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] == marcador2)
    {
      posicaoMarcador2 = i;
    }
  }

  // se o marcador 1 vier depois do marcador 2

  if (posicaoMarcador1 > posicaoMarcador2)
  {
    // troca as posicoes
    int aux = posicaoMarcador1;
    posicaoMarcador1 = posicaoMarcador2;
    posicaoMarcador2 = aux;
  }
  
  // imprimindo os caracteres entre os marcadores

  for (int i = posicaoMarcador1 + 1; i < posicaoMarcador2; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}