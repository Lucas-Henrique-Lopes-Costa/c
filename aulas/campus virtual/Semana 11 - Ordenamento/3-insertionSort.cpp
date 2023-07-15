#include <iostream>
using namespace std;

void insertion_sort(int vetor[], int tam)
{
  int valor_pivo, j; // variaveis auxiliares
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