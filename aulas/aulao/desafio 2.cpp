#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  /*
    Dado um arquivo com varios valores, devolver a MAIOR moda

    entrada:
    7 7 9 9 5 5

    saida:
    9
  */

  // inicializando os arquivos
  ifstream arquivo("moda.txt");

  // inicializando as variáveis
  int valor;

  // passando o arquivo para um vetor
  int vetor[100];
  int i = 0;

  while (!arquivo.eof())
  {
    arquivo >> valor;
    vetor[i] = valor;
    i++;

    // cout << "Valor lido: " << valor << endl;
  }

  // ordenando o vetor
  for (int j = 0; j < i; j++)
  {
    for (int k = 0; k < i; k++)
    {
      if (vetor[j] < vetor[k])
      {
        int aux = vetor[j];
        vetor[j] = vetor[k];
        vetor[k] = aux;
      }
    }
  }

  // // Teste: imprimir vetor ordenado:
  // for (int j = 0; j < i; j++)
  // {
  //   cout << vetor[j] << " ";
  // }

  // contando a moda e mostrando o último valor da maior moda
  int maiorModa = 0;
  for (int j = 0; j < i; j++)
  {
    int frequenciaModa = 1;

    for (int k = j + 1; k < i; k++)
    {
      if (vetor[j] == vetor[k])
      {
        frequenciaModa++;
      }
    }

    if (frequenciaModa > maiorModa)
    {
      maiorModa = frequenciaModa;
    }
  }

  // pegando o maior número com essa moda
  int moda = 0;
  for (int j = 0; j < i; j++)
  {
    int frequenciaModa = 1;

    for (int k = j + 1; k < i; k++)
    {
      if (vetor[j] == vetor[k])
      {
        frequenciaModa++;
      }
    }

    if (frequenciaModa == maiorModa)
    {
      moda = vetor[j];
    }
  }

  cout "A maior moda e: " << moda << endl;

  return 0;
}