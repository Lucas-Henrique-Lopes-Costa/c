#include <iostream>
using namespace std;

void selection_sort(int vetor[], int tam) // pede o vetor e o tamanho do vetor
{
	int menor, aux_troca, comparacoes = 0;
	for (int indice = 0; indice < tam - 1; indice++) // percorre o vetor até o penúltimo elemento
	{
		menor = indice; // tenta encontrar o menor elemento do que esse atual
		for (int j = indice + 1; j < tam; j++)
		{
			comparacoes++;
			if (vetor[j] > vetor[menor]) // se o elemento atual for menor que o menor encontrado
			{
				menor = j; // atualiza o menor
			}
		}
		// fazendo a troca
		aux_troca = vetor[indice];
		vetor[indice] = vetor[menor];
		vetor[menor] = aux_troca;

	}
	
	cout << comparacoes << endl;
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

		if (index == tamanho)
		{
			int *novoVetor = new int[tamanho + 5];

			for (int i = 0; i < tamanho; i++)
				novoVetor[i] = vetor[i];

			delete[] vetor;

			vetor = novoVetor;

			tamanho += 5;
		}

		cin >> numero;
	}

	selection_sort(vetor, index);

	for (int i = 0; i < index; i++)
		cout << vetor[i] << " ";

	cout << endl;

	return 0;
}
