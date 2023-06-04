#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que crie um vetor de 5 posições, depois disso devem ser lidos 5 números inteiros não negativos. Se for colocado como entrada um número inteiro negativo, ele deve ser ignorado, o próximo número irá assumir sua posição, e o vetor com 5 posições deve ficar completo.

    O programa deve substituir todos os números do vetor por -1, porém os elementos devem ser substituídos do menor para o maior. A cada substituição, deve ser mostrado como o vetor está.

    Entrada:
    4 5 9 2 7

    Saída:
    4 5 9 -1 7
    -1 5 9 -1 7
    -1 -1 9 -1 7
    -1 -1 9 -1 -1
    -1 -1 -1 -1 -1
  */

  int vetor[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> vetor[i];
  }

  // maior valor do vetor
  int maior = -1;
  int indice_maior = 0;

  for (int i = 0; i < 5; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
      indice_maior = i;
    }
  }

  // imprima em cada linha trasformando o menor valor do vetor e transforma em -1 em sequencia
  for (int i = 0; i < 5; i++)
  {
    int menor = vetor[indice_maior];
    int posicao = i;

    for (int j = 0; j < 5; j++)
    {
      if (vetor[j] <= menor && vetor[j] != -1)
      {
        menor = vetor[j];
        posicao = j;
      }
    }

    vetor[posicao] = -1;

    for (int j = 0; j < 5; j++)
    {
      cout << vetor[j] << " ";
    }

    cout << endl;
  }

  return 0;
}