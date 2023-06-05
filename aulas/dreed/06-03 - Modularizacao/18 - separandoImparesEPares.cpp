#include <iostream>
using namespace std;

void verificaPar(int vet[], int vetPar[])
{
	int j = 0;
	for (int i = 0; i < 20; i++)
	{
		if (vet[i] % 2 == 0)
		{
			vetPar[j] = vet[i];
			cout << vet[i] << " ";
			j++;
		}
	}
}

void verificaImpar(int vet[], int vetImpar[])
{
	int j = 0;
	for (int i = 0; i < 20; i++)
	{
		if (vet[i] % 2 != 0)
		{
			vetImpar[j] = vet[i];
			cout << vet[i] << " ";
			j++;
		}
	}
}

int main()
{
	/*
		Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Depois, por meio de um procedimento, copie os números pares num vetor e os números ímpares em outro. Imprima o vetor de pares e o vetor de ímpares.

		A ordem dos elementos deve permanecer inalterada.

		Exemplo de Entrada:
		1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

		Exemplo de Saida:
		2 4 6 8 10 12 14 16 18 20
		1 3 5 7 9 11 13 15 17 19
	*/

	// Lendo vetores
	int vet[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> vet[i];
	}

	// Verifica os pares
	int vetPar[20] = {0};
	verificaPar(vet, vetPar);
	cout << endl;

	// Verifica os impares
	int vetImpar[20] = {0};
	verificaImpar(vet, vetImpar);
	cout << endl;

	return 0;
}
