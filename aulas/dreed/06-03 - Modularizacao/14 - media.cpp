#include <iostream>
using namespace std;

double media(int numeros[], int n)
{
	int soma = 0;
	for (int i = 0; i < n; i++)
	{
		soma += numeros[i];
	}

	return (soma / n);
}

int main()
{
	/*
		Faça um programa que receba o tamanho n e os elementos de um vetor. Em seguida, por meio de uma função, calcule a média dos elementos desse vetor e multiplique essa média por todos os elementos que sejam menores ou iguais a ela. Em seguida imprima o novo vetor.

		Entradas:
		int n - Tamanho do vetor.
		int vetor[n] - Elementos do vetor.

		Saídas:
		Novo vetor após as operações.

		Exemplos de Entradas e Saídas:

		Entradas:
		5
		2 0 4 8 6

		Saídas:
		8 0 16 8 6
	*/

	// Lendo vetores
	int n;
	cin >> n;

	int numeros[n];
	for (int i = 0; i < n; i++)
		cin >> numeros[i];

	double mediaCalc = media(numeros, n);

	int medias[n];
	for (int i = 0; i < n; i++)
	{
		if (numeros[i] <= mediaCalc)
			medias[i] = numeros[i] * mediaCalc;
		else
			medias[i] = numeros[i];
	}

	for (int i = 0; i < n; i++)
		cout << medias[i] << " ";

	cout << endl;

	return 0;
}
