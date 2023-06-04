#include <iostream>
using namespace std;

void verificaIntercessao(int vetM[], int m, int vetN[], int n, int intercessao[], int &contInter)
{
	contInter = 0;

	for (int i = 0; i < m; i++)
	{
		bool achou = false;
		for (int j = 0; j < n && !achou; j++)
		{
			if (vetM[i] == vetN[j])
			{
				achou = true;
			}
		}

		if (achou)
		{
			intercessao[contInter] = vetM[i];
			contInter++;
		}
	}
}

int main()
{
	/*
		Faça um programa que receba um vetor de tamanho M e outro de tamanho N, preencha-os e depois, por meio de um procedimento, calcule a Intercessão entre eles. Mostre o resultado na função principal. Caso não haja elementos que possa fazer uma intercessão, imprima -1.

		Entradas:
		int m, n - Tamanho do primeiro e do segundo vetor.
		int vet[n], vet[m] - Vetores que devem ser preenchidos com valores inteiros.

		Saídas:
		A intercessão entre os vetores, vetor[m] ∩ vetor[n].

		Entradas:
		5
		3
		4 2 9 8 6
		7 5 0

		Saídas:
		-1

		Entradas:
		8
		6
		2 4 10 21 8 6 12 13
		21 2 13 5 8 3

		Saídas:
		2   21   8   13
	*/

	// Lendo vetores
	int m, n;
	cin >> m >> n;

	int vetM[m], vetN[n];
	for (int i = 0; i < m; i++)
		cin >> vetM[i];

	for (int i = 0; i < n; i++)
		cin >> vetN[i];

	// Calculando intercessão
	int intercessao[m];
	int contInter;

	verificaIntercessao(vetM, m, vetN, n, intercessao, contInter);

	// Mostrando intercessão
	if (contInter == 0)
		cout << -1 << endl;
	else
		for (int i = 0; i < contInter; i++)
			cout << intercessao[i] << " ";

	cout << endl;

	return 0;
}
