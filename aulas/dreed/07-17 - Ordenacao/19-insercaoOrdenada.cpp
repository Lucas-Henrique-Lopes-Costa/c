/*
Considere um vetor de V de 20 posições, preenchido até o oitavo índice de forma ordenada crescente, com os seguintes elementos: V[1, 3, 6, 7, 8, 22, 25, 41]. O algoritmo deverá ler números fornecidos pelo usuário de forma que os número sejam inseridos nas posições corretas, ou seja, mantendo a ordem crescente do vetor. O término de leitura dos valores fornecidos ocorrerá quando o usuário digitar -1. Quando o vetor for completamente preenchido, imprimir o conteúdo do vetor e sair do programa.

Entradas:
Números fornecido pelo usuário (inteiro), terminados com -1

Saídas:
Vetor ordenado

Exemplo de Entrada:
36 4 23 24 20 5 9 27 50 10 11 2 -1

Exemplo de Saída:
1 2 3 4 5 6 7 8 9 10 11 20 22 23 24 25 27 36 41 50
*/
#include <iostream>
using namespace std;

void selectionSort(int V[], int i)
{
  for (int j = 0; j < i; j++)
  {
    int menor = j;
    for (int k = j + 1; k < i; k++)
    {
      if (V[k] < V[menor])
      {
        menor = k;
      }
    }
    int aux = V[j];
    V[j] = V[menor];
    V[menor] = aux;
  }
}

int main()
{
  int V[20] = {1, 3, 6, 7, 8, 22, 25, 41};
  int i = 8;

  int n;
  cin >> n;

  while (n != -1)
  {
    V[i] = n;
    i++;
    cin >> n;
  }

  selectionSort(V, i);

  for (int k = 0; k < i; k++)
  {
    cout << V[k] << " ";
  }

  cout << endl;

  return 0;
}
