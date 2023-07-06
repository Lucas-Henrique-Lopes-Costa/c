#include <iostream>
using namespace std;

void insertion_sort(int vetor[], int tam)
{
  int valor_pivo, j; // variaveis auxiliares

  int contComparacoes = 0;

  for (int i = 1; i < tam; i++) // percorre o vetor a partir do segundo elemento
  {
    valor_pivo = vetor[i]; // valor que será comparado
    j = i - 1; // indice do valor anterior ao valor_pivo, isso porque o valor_pivo será comparado com o valor anterior

    while ((j >= 0) && (valor_pivo < vetor[j])) // enquanto o valor_pivo for menor que o valor anterior e o indice for maior ou igual a zero
    {
      vetor[j + 1] = vetor[j]; // desloca o valor anterior para a direita
      j--; // decrementa o indice, poque o valor anterior foi deslocado para a direita
    }
    vetor[j + 1] = valor_pivo; // insere o valor_pivo na posição correta
  }
}

// EXEMPLO DE EXECUÇÃO
// vetor = [5, 4, 3, 2, 1]

// i = 1
// valor_pivo = 4
// j = 0
// vetor = [5, 5, 3, 2, 1]
// j = -1

// vetor = [4, 5, 3, 2, 1]

// i = 2
// valor_pivo = 3
// j = 1
// vetor = [4, 5, 5, 2, 1]
// j = 0
// vetor = [4, 4, 5, 2, 1]
// j = -1
// vetor = [3, 4, 5, 2, 1]

// Aqui ele vai decrementando o j até que o valor_pivo seja maior que o vetor[j], depois ele insere o valor_pivo na posição j + 1

int main()
{
  int tamanho = 5;
  int *vetor = new int[tamanho];

  int numero;
  cin >> numero;

  int index = 0;
  while (numero > 0)
  {
    vetor[index] = numero;

    index++;

    cin >> numero;
  }

  insertion_sort(vetor, tamanho);

  for (int i = 0; i < tamanho; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}