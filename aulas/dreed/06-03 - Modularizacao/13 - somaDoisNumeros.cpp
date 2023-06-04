#include <iostream>
using namespace std;

void verificaSoma(int numeros[], int n, int resultado[], bool &encontrou)
{
	encontrou = false;
	for (int i = 0; i < n && !encontrou; i++)
	{
		for (int j = i + 1; j < n && !encontrou; j++)
		{
			if (numeros[i] + numeros[j] == n)
			{
				encontrou = true;
				resultado[0] = numeros[i];
				resultado[1] = numeros[j];
			}
		}
	}
}

int main()
{
	/*
		Faça um programa que receba um vetor de números inteiro de capacidade N e em seguida leia os elementos deste vetor.

		Seu programa deverá verificar, por meio de uma função, se existe dois elementos do vetor cuja soma seja igual ao tamanho do vetor. Caso existam os elementos deverão ser impressos, porém caso não existam deverá ser impresso ''Nao existe soma valida''.

		Obs: Caso existam diferentes combinações cuja soma seja igual a N considere a primeira ocorrência.

		Entradas:
		Número inteiro indicando o tamanho N do vetor.
		Números inteiros indicando os elementos do vetor.

		Saídas:
		Os dois elementos cuja soma é igual a N, ou então escrever ''Nao existe soma valida''.

		Exemplo de Entrada:
		5
		3 4 6 2 1

		Exemplo de Saída:
		3 2

		Exemplo de Entrada:
		3
		5 4 1

		Exemplo de Saída:
		Nao existe soma valida
	*/

	// Lendo vetores
	int n;
	cin >> n;

	int numeros[n];
	for (int i = 0; i < n; i++)
		cin >> numeros[i];

	int resultado[2];
	bool encontrou = false;
	verificaSoma(numeros, n, resultado, encontrou);

	if (encontrou)
	{
		for (int i = 0; i < 2; i++)
			cout << resultado[i] << " ";
	}
	else
	{
		cout << "Nao existe soma valida";
	}

	cout << endl;

	return 0;
}
