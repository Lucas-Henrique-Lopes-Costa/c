#include <iostream>
using namespace std;

void media(float numeros[], float &mediaCalc, int n)
{
	float soma = 0;
	for (int i = 0; i < n; i++)
	{
		soma += numeros[i];
	}
	
	mediaCalc = soma / n;
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

	float numeros[n];
	for (int i = 0; i < n; i++)
		cin >> numeros[i];

	float mediaCalc;
	media(numeros, mediaCalc, n);

	for (int i = 0; i < n; i++)
	{
		if (numeros[i] <= mediaCalc)
			cout << (numeros[i] * mediaCalc) << " ";
		else
			cout << numeros[i] << " ";
	}

	cout << endl;
	
	return 0;
}
