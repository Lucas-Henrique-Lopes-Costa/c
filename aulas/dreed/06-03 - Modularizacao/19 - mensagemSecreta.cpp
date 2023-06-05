#include <iostream>
using namespace std;

void mensagemSecreta (string palavras[], int indices[], int tamanhoIndices)
{
	for (int i = 0; i < tamanhoIndices; i++)
	{
		cout << palavras[indices[i]] << " ";
	}
}

int main()
{
	/*
		O dia dos pais está chegando e você decidiu escrever uma mensagem secreta para o seu pai utilizando seus conhecimentos de programação. Para isso, faça um procedimento que receba como parâmetros de entrada dois vetores, denominados aqui como Palavras e Indices. O vetor Palavras destina-se ao armazenamento de um conjunto de palavras aleatórias, o vetor Indices destina-se ao armazenamento de um conjunto de números inteiros positivos que representam possíveis índices de acesso para o vetor Palavras. Seu procedimento deve exibir no dispositivo de saída padrão as strings do vetor Palavras na ordem especificada pelos números inteiros do vetor Indices. Note que um mesmo índice (e consequentemente palavra) pode aparecer mais de uma vez.

		Assuma que todos os números inteiros especificados no vetor Indices indicam posições válidas no vetor Palavras.

		Entradas:
		Tamanho da sequência de strings.
		Sequência de strings para o vetor Palavras. Toda a sequência será fornecida em uma única linha.
		Tamanho do vetor de índices.
		Sequência de números inteiros para o vetor Indices. Toda a sequência será fornecida em uma única linha.
		
		Saídas:
		Sequência de strings que formam a mensagem secreta para o dia dos pais.
		
		Exemplo de Entrada:
		12
		manha carro triste amarelo mae feliz noite pais verde dia cansado dos
		4
		5 9 11 7
		
		Exemplo de Saída:
		feliz dia dos pais
	*/

	// Lendo vetores
	int tamanho;
	cin >> tamanho;

	string palavras[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		cin >> palavras[i];
	}

	int tamanhoIndices;
	cin >> tamanhoIndices;

	int indices[tamanhoIndices];
	for (int i = 0; i < tamanhoIndices; i++)
	{
		cin >> indices[i];
	}

	// Excutando funcoes
	mensagemSecreta(palavras, indices, tamanhoIndices);

	return 0;
}
