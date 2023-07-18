#include <iostream>
#include <fstream>
using namespace std;

struct times
{
  int numero;
  string nome;
  int gols;
};

// Ordernar o vetor de acordo com algum campo
void ordenacao(times vetor[], int tamanho)
{
  int menor;
  for (int i = 0; i < tamanho; i++)
  {
    menor = i;
    for (int j = i + 1; j < tamanho; j++)
    {
      if (vetor[j].numero < vetor[menor].numero)
      {
        menor = j;
      }
    }

    swap(vetor[i], vetor[menor]);
  }
}

// fazer pesquisa nele
void busca(times vetor[], int tamanho)
{
  int numero;
  cin >> numero;

  int i = 0;
  while ((i < tamanho) && (vetor[i].numero != numero))
  {
    i++;
  }

  if (i == tamanho)
  {
    cout << -1 << endl;
  }

  else
  {
    cout << vetor[i].numero << " " << vetor[i].nome << " " << vetor[i].gols << endl;
  }
}

int main()
{
  // Tem que ler de um arquivo
  ifstream arquivoIn("entrada.txt");
  if (!arquivoIn.is_open())
  {
    cout << "Erro ao abrir o arquivo" << endl;
    return 0;
  }

  times *vetor = new times[5];

  int i = 0;
  while (arquivoIn >> vetor[i].numero >> vetor[i].nome >> vetor[i].gols)
  {
    i++;
    if (i >= 5)
    {
      // armazenar em um vetor dinamico de registro
      times *aux = new times[i + 1];
      copy(&vetor[0], &vetor[i], aux);

      delete[] vetor;
      vetor = aux;
    }
  }

  arquivoIn.close();

  ordenacao(vetor, i);
  
  busca(vetor, i);

  // imprime vetor ordenado
  cout << endl << "Esse e o vetor ordenado:" << endl;
  for (int j = 0; j < i; j++)
  {
    cout << vetor[j].numero << " " << vetor[j].nome << " " << vetor[j].gols << endl;
  }
  
  return 0;
}