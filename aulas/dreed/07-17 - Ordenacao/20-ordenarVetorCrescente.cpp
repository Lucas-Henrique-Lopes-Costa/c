/*
Faça um programa que recebe um vetor vec de inteiros com tamanho par n. Ordene esse vetor em ordem crescente até a metade e em ordem decrescente da metade até o final. O método utilizado é de sua escolha, mas deve ser algum dos algoritmos aprovados para uso na disciplina.

Entradas:
tam - Tamanho do vetor
vet - Vetor de inteiros

Saída:
vet - Vetor ordenado em ordem crescente até a metade e ordem decrescente da metade até o final

Entradas:
10
2 -1 0 4 3 8 -2 1 5 7

Saída:
-1 0 2 3 4 8 7 5 1 -2
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int vet[n];
  for (int i = 0; i < n; i++)
    cin >> vet[i];

  // ordenando a primeira metade
  for (int i = 1; i < n/2; i++)
  {
    int j = i;
    while (j > 0 && vet[j] < vet[j-1])
    {
      int aux = vet[j];
      vet[j] = vet[j-1];
      vet[j-1] = aux;
      j--;
    }
  }

  // ordenando a segunda metade
  for (int i = n/2 + 1; i < n; i++)
  {
    int j = i;
    while (j > n/2 && vet[j] > vet[j-1])
    {
      int aux = vet[j];
      vet[j] = vet[j-1];
      vet[j-1] = aux;
      j--;
    }
  }

  for (int i = 0; i < n; i++)
    cout << vet[i] << " ";

  return 0;
}
