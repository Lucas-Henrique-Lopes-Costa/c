/*
Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.

Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B e determine a união. O tamanho de cada vetor será informado pelo usuário.

Obs.: Considere que não existirão vetores vazios.

Obs.2: Os vetores devem ser alocados dinamicamente.

Entradas:
Tamanho do vetor A.
Elementos do vetor A.
Tamanho do vetor B.
Elementos do vetor B.

Saídas:
Vetor C representado a união dos vetores A e B.

Exemplo de Entrada:
3
1 2 3
2
2 4

Exemplo de Saída:
1 2 3 4
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *vetor = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++)
  {
    int numero;
    cin >> numero;

    bool existe = false;
    int j = 0;
    while (!existe && j < n)
    {
      if (vetor[j] == numero)
      {
        existe = true;
      }
      j++;
    }

    if (!existe)
    {
      int *aux = new int[n + 1];
      copy(vetor, vetor + n, aux);
      aux[n] = numero;

      delete[] vetor;
      vetor = aux;

      n++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}
