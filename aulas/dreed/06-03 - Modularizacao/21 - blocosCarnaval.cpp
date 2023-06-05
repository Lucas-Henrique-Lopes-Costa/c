#include <iostream>
using namespace std;

float media(string circuito[], int tamanho)
{
	float soma = 0;
	for (int i = 0; i < tamanho; i++)
		soma += stoi(circuito[i]);

	return soma / tamanho;
}

int main()
{
	/*
		O carnaval de Salvador é conhecido pela energia contagiante de sua folia. O público festeja em três circuitos principais. Em cada circuito irá circular uma quantidade de blocos e, em cada bloco, há uma quantidade de pessoas.

		Faça um programa que recebe a quantidade de blocos em cada um dos três circuitos (a quantidade de blocos é a mesma para cada circuito), o nome de cada circuito e a quantidade de pessoas que vão pular o carnaval em cada bloco. Para cada circuito, utilize vetor para armazenar a quantidade de pessoas em cada bloco. O programa deve calcular e exibir:
		Para cada circuito, a quantidade média de pessoas por bloco;
		O nome do circuito que possui a maior quantidade de pessoas e essa quantidade.
		O cálculo da média e da quantidade de pessoas em cada circuito deverá ser feita por meio de um procedimento, utilizando passagem de parâmetros por referência.

		Entradas:
		Um número inteiro que representa a quantidade de blocos por circuito;
		Para cada circuito, o nome do circuito e,
		uma lista de valores inteiros com a quantidade pessoas em cada bloco, na mesma linha.
		
		Saídas:
		Para cada circuito, a quantidade média de pessoas por bloco;
		O nome do circuito que possui a maior quantidade de pessoas e essa quantidade (na mesma linha).
		
		Exemplo de Entrada:
		5
		DODO
		50 82 76 91 87
		OSMAR
		122 105 94 103 88
		BATATINHA
		57 49 82 70 63
		
		Exemplo de Saída:
		77.2
		102.4
		64.2
		OSMAR 512.0
	*/

	// Lendo vetores
	int tamanho;
	cin >> tamanho;

	// Declarando vetores
	string nomeCircuito1;
	cin >> nomeCircuito1;

	string circuito1[tamanho];
	for (int i = 0; i < tamanho; i++)
		cin >> circuito1[i];
	
	string nomeCircuito2;
	cin >> nomeCircuito2;

	string circuito2[tamanho];
	for (int i = 0; i < tamanho; i++)
		cin >> circuito2[i];

	string nomeCircuito3;
	cin >> nomeCircuito3;

	string circuito3[tamanho];
	for (int i = 0; i < tamanho; i++)
		cin >> circuito3[i];

	// Chamando Funções, para calcular a média e também dizer o maior
	float mediaCircuito1 = media(circuito1, tamanho);
	float mediaCircuito2 = media(circuito2, tamanho);
	float mediaCircuito3 = media(circuito3, tamanho);

	// Imprimindo médias
	cout << mediaCircuito1 << endl;
	cout << mediaCircuito2 << endl;
	cout << mediaCircuito3 << endl;

	// Imprimindo o maior
	if (mediaCircuito1 > mediaCircuito2 && mediaCircuito1 > mediaCircuito3)
		cout << nomeCircuito1 << " " << mediaCircuito1 * tamanho << endl;
	else if (mediaCircuito2 > mediaCircuito1 && mediaCircuito2 > mediaCircuito3)
		cout << nomeCircuito2 << " " << mediaCircuito2 * tamanho << endl;
	else
		cout << nomeCircuito3 << " " << mediaCircuito3 * tamanho << endl;

	return 0;
}
