#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que receba dois vetores, sendo que o segundo deverá ter o dobro do tamanho do primeiro.O usuário deverá preencher completamente o primeiro vetor, enquanto o segundo vetor terá apenas a metade de seu tamanho ocupado.

    O programa deverá inserir os elementos do primeiro vetor no segundos vetor, em um determinada posição a ser informada pelo usuário.

    OBS.:Todos os elementos do primeiro vetor devem ser inseridos na mesma posição informada, sendo em que em cada passo da repetição, um novo número,elemento do primeiro vetor, ocupará posição.

    OBS2.:Considere que só poderá ter entradas de posição já ocupadas do segundo vetor.

    Entradas:

    Tamanho do primeiro vetor (int).
    Elementos do primeiro vetor (int).
    Elementos do segundo vetor (int)
    Posição a se inserir (int).
    Saídas:

    Cada passo da inserção dos elementos.
    Exemplo de Entrada:

    5
    1 2 3 4 5
    10 35 11 2 1
    1
    Exemplo de Saída:

    10 1 35 11 2 1
    10 2 1 35 11 2 1
    10 3 2 1 35 11 2 1
    10 4 3 2 1 35 11 2 1
    10 5 4 3 2 1 35 11 2 1
  */

  int n, pos;

  cin >> n;

  int tamanho = n * 2;

  int v1[n], v2[tamanho];

  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }

  for (int i = 0; i < tamanho / 2; i++)
  {
    cin >> v2[i];
  }

  cin >> pos;

  for (int i = 0; i < n; i++)
  {
    for (int j = n * 2 - 1; j >= pos; j--)
    {
      v2[j] = v2[j - 1];
    }

    v2[pos] = v1[i];
    pos++;

    for (int j = 0; j < n * 2; j++)
    {
      cout << v2[j] << " ";
    }

    cout << endl;
  }
  
  return 0;
}