#include <iostream>
using namespace std;

int main()
{
  /*
    Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.

    Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B e determine a união.

    Obs.: Considere que não existirão vetores vazios.

    Obs.2: Os vetores devem estar sempre em ordem crescente.

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

  int tamanhoA, tamanhoB, tamanhoC;

  // Lendo o vetor A
  cin >> tamanhoA;
  int vetorA[tamanhoA];
  for (int i = 0; i < tamanhoA; i++)
  {
    cin >> vetorA[i];
  }

  // Ler o vetor B
  cin >> tamanhoB;
  int vetorB[tamanhoB];
  for (int i = 0; i < tamanhoB; i++)
  {
    cin >> vetorB[i];
  }

  // Tamanho máximo do vetor C
  tamanhoC = tamanhoA + tamanhoB;
  int vetorC[tamanhoC];

  // Inicializando o vetor C com os valores do vetor A
  for (int i = 0; i < tamanhoA; i++)
  {
    vetorC[i] = vetorA[i];
  }

  // Inicializando o vetor C com os valores do vetor B
  for (int i = 0; i < tamanhoB; i++)
  {
    vetorC[tamanhoA + i] = vetorB[i];
  }

  // removendo os elementos repetidos
  for (int i = 0; i < tamanhoC; i++)
  {
    for (int j = i + 1; j < tamanhoC; j++)
    {
      if (vetorC[i] == vetorC[j])
      {
        for (int k = j; k < tamanhoC; k++)
        {
          vetorC[k] = vetorC[k + 1];
        }
        tamanhoC--;
        j--;
      }
    }
  }

  // ordernando o vetor C
  for (int i = 0; i < tamanhoC; i++)
  {
    for (int j = i + 1; j < tamanhoC; j++)
    {
      if (vetorC[i] > vetorC[j])
      {
        int aux = vetorC[i];
        vetorC[i] = vetorC[j];
        vetorC[j] = aux;
      }
    }
  }

  // imprimindo o vetor C
  for (int i = 0; i < tamanhoC; i++)
  {
    cout << vetorC[i] << " ";
  }

  cout << endl;

  return 0;
}