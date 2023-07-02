#include <iostream>
using namespace std;

void selection_sort(int vetor[], int tam) // pede o vetor e o tamanho do vetor
{
	int menor, aux_troca, comparacoes = 0;
	for (int indice = 0; indice < tam - 1; indice++) // percorre o vetor
	{
		menor = indice; // tenta encontrar o menor elemento do que esse atual
		for (int j = indice + 1; j < tam; j++)
		{
			comparacoes++;
			if (vetor[j] < vetor[menor]) // se o elemento atual for menor que o menor encontrado
			{
				menor = j; // atualiza o menor
			}
		}
		// fazendo a troca
		aux_troca = vetor[indice];
		vetor[indice] = vetor[menor];
		vetor[menor] = aux_troca;

	}
	
	cout << COM comparacoes << endl;
}

// EXEMPLOS

// 1 4 3 2 0

// Pega o 1 e compara com o 4, 3, 2 e 0. O 0 é o menor, então troca o 1 com o 0.

// 0 4 3 2 1

// Pega o 4 e compara com o 3, 2 e 1. O 1 é o menor, então troca o 4 com o 1.

// 0 1 3 2 4

// Pega o 3 e compara com o 2 e 4. O 2 é o menor, então troca o 3 com o 2.

// 0 1 2 3 4

int main()
{
	int tamanho = 5;
	int *vetor = new int[tamanho];

	int transformacoes = 0;

	int numero;
	cin >> numero;
	int index = 0;

	while (numero > 0)
	{
		vetor[index] = numero;

		index++;

		if (index == tamanho)
		{
			int *novoVetor = new int[tamanho + 5];

			for (int i = 0; i < tamanho; i++)
				novoVetor[i] = vetor[i];

			delete[] vetor;

			vetor = novoVetor;

			tamanho += 5;

			transformacoes++;
		}

		cin >> numero;
	}

	selection_sort(vetor, index);

	for (int i = 0; i < index; i++)
		cout << vetor[i] << " ";

	cout << endl;

	return 0;
}
