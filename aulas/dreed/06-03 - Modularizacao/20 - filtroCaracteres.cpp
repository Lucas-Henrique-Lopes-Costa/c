#include <iostream>
using namespace std;

void antes(char palavras[], int tamanho, char letra)
{
	int tamanhoAntes = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (palavras[i] < letra)
			tamanhoAntes++;
	}

	char antes[tamanhoAntes];
	int j = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (palavras[i] < letra)
		{
			antes[j] = palavras[i];
			j++;
		}
	}
	
	for (int i = 0; i < tamanhoAntes; i++)
		cout << antes[i] << " ";
	cout << endl;
}

void depois(char palavras[], int tamanho, char letra)
{
	int tamanhoDepois = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (palavras[i] > letra)
			tamanhoDepois++;
	}

	char depois[tamanhoDepois];
	int j = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (palavras[i] > letra)
		{
			depois[j] = palavras[i];
			j++;
		}
	}

	for (int i = 0; i < tamanhoDepois; i++)
		cout << depois[i] << " ";
	cout << endl;
}

int main()
{
	/*
		Faça um programa que recebe um vetor de caracteres de tamanho m e um caractere indicador de separação. O programa deve criar e exibir dois vetores, sendo o primeiro com todos os caracteres do vetor de entrada que alfabeticamente são anteriores ao caractere indicador de separação e o segundo com os caracteres do vetor de entrada posteriores ao caractere de separação. Obs: deve ser mantida a ordem do vetor original. Obs: portanto, caso o caractere de separação apareça no vetor de entrada, ele não será exibido em nenhum dos vetores de saída.

		A separação dos vetores deverá ser feita por um procedimento, utilizando passagem por referência tanto do vetor inicial como dos vetores resultantes e seus respectivos tamanhos. A impressão deverá ser feita na função principal.

		Entradas:
		Tamanho do vetor
		Vetor de caracteres (separados por espaços)
		Caractere indicador da separação

		Saída:
		Vetor com os caracteres do vetor original que são alfabeticamente anteriores ao caractere indicador da separação.
		Vetor com os caracteres do vetor original que são alfabeticamente posteriores ao caractere indicador da separação.

		Exemplo de entradas:
		6
		a e y s b c
		e

		Exemplo de saídas:
		a b c
		y s

		Exemplo de entradas:
		6
		a e y s b c
		z

		Exemplo de saídas:
		a e y s b c
	*/

	// Lendo vetores
	int tamanho;
	cin >> tamanho;

	char palavras[tamanho];
	for (int i = 0; i < tamanho; i++)
		cin >> palavras[i];

	char letra;
	cin >> letra;

	// Excutando funcoes
	antes(palavras, tamanho, letra);
	depois(palavras, tamanho, letra);

	return 0;
}
