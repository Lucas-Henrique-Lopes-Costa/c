#include <iostream>

using namespace std;

int main()
{

  // Pegando os valores digitados até encontrar -1;
  int tamanho = 200;
  float vetor[tamanho];

  bool continua = true;

  int i = 0;
  while (continua)
  {
    cin >> vetor[i];

    if (vetor[i] == -1)
    {
      continua = false;
    }
    i++;
  }

  // Declarando o tamanho do vetor como a quantidade de dados inseridos menos o -1;
  tamanho = i - 1;

  // Delimitando qual a quantidade de vezes que um numero deve aparecer para ser considerado moda
  int frequenciaModa = 0;
  int maiorNumeroDeModas = 1;

  for (int i = 0; i < tamanho; i++)
  {
    frequenciaModa = 1;

    // Compara o valor da posição i com todos os outros valores do vetor
    for (int j = i + 1; j < tamanho; j++)
    {
      if (vetor[i] == vetor[j])
      {
        frequenciaModa++;
      }

      if (frequenciaModa > maiorNumeroDeModas)
      {
        maiorNumeroDeModas = frequenciaModa;
      }
    }
  }

  int quantidadeModas = 0;

  for (int i = 0; i < tamanho; i++)
  {
    frequenciaModa = 1;

    for (int j = i + 1; j < tamanho; j++)
    {
      if (vetor[i] == vetor[j])
      {
        frequenciaModa++;
      }
    }
    if (frequenciaModa == maiorNumeroDeModas)
    {
      quantidadeModas++;
    }
  }

  cout << quantidadeModas << endl;

  return 0;
}