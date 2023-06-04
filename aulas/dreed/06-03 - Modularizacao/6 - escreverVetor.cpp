#include <iostream>
using namespace std;

void formata(int numeros[], int tamanho)
{
	cout << "[";
	
	if (tamanho > 2)
	{
		for (int i = 0; i < tamanho; i++)
		{
			if (i == tamanho - 1)
				cout << numeros[i];
			else
				cout << numeros[i] << ", ";
		}
	}
	
	cout << "]";
}

int main()
{
	/*
	Faça um programa que lê vários números inteiros, guarda-os num vetor e escreve o conteúdo do vetor.

	Deverá existir um subprograma que recebe um vetor via parâmetros e escreve o seu conteúdo. O vetor pode ter tamanho zero. A escrita do vetor deve ser formatada, com os seguintes itens:

	Deve haver um "[" (abre colchetes) antes do primeiro elemento. Não deve haver qualquer espaço entre o "[" e o primeiro elemento.
	Deve haver uma vírgula seguida de espaço entre cada elemento.
	Deve haver um "]" (fecha colchetes) depois do último elemento. Não deve haver qualquer espaço entre o último elemento e o "]".
	O subprograma principal deverá escrever um final de linha depois de escrever o conteúdo do vetor.

	Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.

	Entradas:
	A quantidade de números a serem lidos.
	Vários números inteiros.

	Saídas:
	O conteúdo do vetor criado, conforme a formatação acima.

	Exemplo de Entrada:
	4
	2 3 4 1

	Exemplo de Saída:
	[2, 3, 4, 1]
	*/

	int n;
	cin >> n;

	int numeros[n];
	for (int i = 0; i < n; i++)
	{
	cin >> numeros[i];
	}

	formata(numeros, n);

	cout << endl;

	return 0;
}
