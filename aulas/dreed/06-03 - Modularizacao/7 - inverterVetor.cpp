#include <iostream>
using namespace std;

void inverter(char letras[], int tamanho, char invertido[])
{
	int j = tamanho - 1;
	
	for (int i = 0; i < tamanho; i++)
	{
		invertido[i] = letras[j];
		j--;
	}
	
}

int main()
{
	/*
	Faça um programa que inverte os elementos de um vetor. Todas as operações de leitura e escrita devem ser realizadas no subprograma principal enquanto um outro subprograma realiza a inversão propriamente dita do vetor. Não é permitido criar um novo vetor, a inversão deve ser realizada no próprio vetor. O planejamento da passagem de parâmetros é parte fundamental desta tarefa e tem grande influência na qualidade da solução.

	Entradas:

	A quantidade de elementos que devem ser lidos.
	Os elementos (letras)
	Saídas:

	As letras, na ordem inversa da leitura, separadas por espaços.
	Exemplo de entrada:

	5
	A S D F G
	Exemplo de saída:

	G F D S A
	*/

	int n;
	cin >> n;

	char letras[n];
	for (int i = 0; i < n; i++)
	{
		cin >> letras[i];
	}

	char invertido[n];
	inverter(letras, n, invertido);

	for (int i = 0; i < n; i++)
	{
		cout << invertido[i] << " ";
	}

	cout << endl;

	return 0;
}
