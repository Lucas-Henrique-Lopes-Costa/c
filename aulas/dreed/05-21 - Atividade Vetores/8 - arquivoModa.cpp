#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  /*
    Em estatística, moda é o valor que ocorre com maior frequência num conjunto de dados, não sendo necessariamente única. Por exemplo a série {1, 3, 5, 5, 6, 6} apresenta 2 modas: 5 e 6.
    Faça um programa que leia um arquivo denominado "entrada.txt", onde a primeira linha do arquivo corresponde ao tamanho N do vetor e as demais linhas contém inteiros. O programa deverá escrever no arquivo "saida.txt" quantas e quais as modas do vetor.

    Exemplos de Entrada e Saída em arquivo:
    Exemplo de entrada no arquivo "entrada.txt":
    7
    2 4 1 10 4 2 1

    Exemplo de saída no arquivo "saida.txt":
    3
    2 4 1
  */

  // Abrir o arquivo de entrada
  ifstream entrada("entrada.txt");

  // Ler o tamanho do vetor
  int tamanho;
  entrada >> tamanho;
  int vetor[tamanho];

  // Ler os valores do vetor
  for (int i = 0; i < tamanho; i++)
  {
    entrada >> vetor[i];
  }

  // Calcular a moda
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

  // Encontrar quantos elementos tem a mesma frequência da moda e quais são eles
  int quantidadeModas = 0;
  int vetorModas[tamanho] = {0};

  for (int i = 0; i < tamanho; i++)
  {
    frequenciaModa = 1;

    for (int j = i+1; j < tamanho; j++)
    {
      if (vetor[i] == vetor[j])
      {
        frequenciaModa++;
      }
    }

    if (frequenciaModa == maiorNumeroDeModas)
    {
      vetorModas[quantidadeModas] = vetor[i];
      quantidadeModas++;
    }
  }

  // Escrever no arquivo de saída
  ofstream saida("saida.txt");

  int frequenciaModaReal = quantidadeModas / frequenciaModa;

  saida << frequenciaModaReal << endl;

  // Tirar os elementos repetidos do vetor de modas
  for (int i = 0; i < quantidadeModas; i++)
  {
    for (int j = i + 1; j < quantidadeModas; j++)
    {
      if (vetorModas[i] == vetorModas[j])
      {
        vetorModas[j] = vetorModas[quantidadeModas - 1];
        quantidadeModas--;
        j--;
      }
    }
  }

  // Escrever as modas no arquivo de saída
  for (int i = 0; i < quantidadeModas; i++)
  {
    saida << vetorModas[i] << " ";
  }

  // Fechar os arquivos
  entrada.close();
  saida.close();

  return 0;
}