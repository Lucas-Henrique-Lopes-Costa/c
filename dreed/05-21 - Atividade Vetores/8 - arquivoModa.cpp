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

  for (int i = 0; i < tamanho; i++)
  {
    int frequencia = 0;

    // Compara o valor da posição i com todos os outros valores do vetor
    for (int j = 0; j < tamanho; j++)
    {
      if (vetor[i] == vetor[j])
      {
        frequencia++;
      }
    }

    if (frequencia > frequenciaModa)
    {
      frequenciaModa = frequencia;
    }
  }

  // Encontrar quantos elementos tem a mesma frequência da moda e quais são eles
  int quantidadeModas = 0;
  int vetorModas[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    int frequencia = 0;

    for (int j = 0; j < tamanho; j++)
    {
      if (vetor[i] == vetor[j])
      {
        frequencia++;
      }
    }

    if (frequencia == frequenciaModa)
    {
      vetorModas[quantidadeModas] = vetor[i];
      quantidadeModas++;
    }
  }

  quantidadeModas /= frequenciaModa;

  // Escrever no arquivo de saída
  ofstream saida("saida.txt");

  saida << quantidadeModas << endl;

  for (int i = 0; i < quantidadeModas; i++)
  {
    saida << vetorModas[i] << " ";
  }

  // Fechar os arquivos
  entrada.close();
  saida.close();

  return 0;
}