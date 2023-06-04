#include <iostream>
using namespace std;

float mediana(int numeros[], int tamanho)
{
	if (tamanho % 2 == 0)
	{
		float media = (numeros[(tamanho / 2) - 1] + numeros[(tamanho / 2)]) / 2.0;
		return media;
	}
	else
	{
		return numeros[(tamanho / 2)];
	}
}

int main()
{
	/*
		Escreva um programa que recebe vários números inteiros, em ordem crescente e então determina sua mediana.

		Deverá existir um subprograma que recebe um vetor ordenado e retorna a mediana.

		Todas as operações de leitura e escrita devem ser realizadas no módulo principal.

		A mediana de uma sequência ordenada de N elementos (e0, e1, ..., en-1) é definida da seguinte forma:

		Se N for ímpar, então a mediana é dada pelo elemento da posição central.
		Se N for par, então a mediana é dada pela média aritmética dos dois elementos nas posições centrais.

		Entradas:
		Número de elementos no vetor (maior que 0).
		Elementos do vetor. Os elementos têm tipo inteiro.

		Saídas:
		Mediana.

		Exemplo de entrada 1:
		5
		1 3 9 12 20

		Exemplo de saída 1:
		9

		Exemplo de entrada 2:
		4
		1 4 7 9

		Exemplo de saída 2:
		5.5
	*/

	int n;
	cin >> n;

	int numeros[n];
	for (int i = 0; i < n; i++)
	{
		cin >> numeros[i];
	}

	cout << mediana(numeros, n) << endl;

	return 0;
}
