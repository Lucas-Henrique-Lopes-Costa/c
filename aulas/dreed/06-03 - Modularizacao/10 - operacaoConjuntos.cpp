#include <iostream>
using namespace std;

void uniao(int vetA[], int vetB[], int tamA, int tamB)
{
	int vetC[tamA + tamB];
	int tamC = 0;

	for (int i = 0; i < tamA; i++)
	{
		vetC[tamC] = vetA[i];
		tamC++;
	}

	// Percorre com o vetor B, mas verifica se o elemento já existe no vetor C
	for (int i = 0; i < tamB; i++)
	{
		bool existe = false;
		for (int j = 0; j < tamC && !existe; j++)
		{
			if (vetB[i] == vetC[j])
			{
				existe = true;
			}
		}

		if (!existe)
		{
			vetC[tamC] = vetB[i];
			tamC++;
		}
	}

	for (int i = 0; i < tamC; i++)
	{
		cout << vetC[i] << " ";
	}
}

int main()
{
	/*
		Faça um programa que receba um vetor de tamanho M e outro de tamanho N, preencha-os e calcule, por meio de uma função, a União entre eles. Apresente o resultado na função principal.

		Entradas:
		int m, n - Tamanho do primeiro e do segundo vetor.
		int vet[n], vet[m] - Vetores que devem ser preenchidos com valores inteiros.

		Saídas:
		A união entre os vetores, vetor[m] ∪ vetor[n].

		Exemplos de Entradas e Saídas:

		Entradas:
		5
		3
		4 2 9 8 6
		2 5 0

		Saídas:
		4   2   9   8   6   5   0
	*/

	int n1;
	cin >> n1;

	int n2;
	cin >> n2;

	int numerosA[n1];
	for (int i = 0; i < n1; i++)
	{
		cin >> numerosA[i];
	}

	int numerosB[n2];
	for (int i = 0; i < n2; i++)
	{
		cin >> numerosB[i];
	}

	uniao(numerosA, numerosB, n1, n2);
	cout << endl;

	return 0;
}
