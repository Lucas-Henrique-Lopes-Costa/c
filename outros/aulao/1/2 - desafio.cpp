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
  cout << "Bem Vindo, mestre Jedi! Vamos calcular a maior moda de um arquivo de valores inteiros." << endl;
  cout << "Digite o nome do arquivo: ";

  string nomeArquivo;
  cin >> nomeArquivo;

  ifstream arquivo(nomeArquivo);
  // verificando se o arquivo foi aberto corretamente
  if (!arquivo.is_open())
  {
    cout << "Erro ao abrir o arquivo" << endl;
    return 0;
  }

  // passando o arquivo para um vetor
  int valor;
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

  // contando a moda e mostrando o último valor da maior moda
  int maiorModa = 0;
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
      
      // pegando o maior número com essa moda
      if (frequenciaModa == maiorModa)
      {
        moda = vetor[j];
      }
    }

    if (frequenciaModa > maiorModa)
    {
      maiorModa = frequenciaModa;
    }
  }

  cout << "A maior moda e: " << moda << endl;

  return 0;
}