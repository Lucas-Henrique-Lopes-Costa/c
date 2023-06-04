#include <iostream>
using namespace std;

float produtoEscalar(float vetA[], float vetB[], int n)
{
	float produtoEscalar = 0;
	for (int i = 0; i < n; i++)
		produtoEscalar += vetA[i] * vetB[i];

	return produtoEscalar;
}

int main()
{
	/*
		Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores. O cálculo do produto escalar deverá ser feito em uma função e o resultado será impresso pelo subprograma principal.

		Para calcular o produto escalar utilize a seguinte fórmula:

		Defina uma função cujo nome é "principal", onde as operações de leitura e escrita de dados deverão ser realizadas.

		Obs.: Vetores em Python são implementados como listas cujos elementos são todos homogêneos.

		Entrada:
		A primeira linha da entrada será o número de elementos dos vetores. As linhas seguintes serão compostas pelos valores (números reais) de cada posição do primeiro vetor e em seguida pelos valores (números reais) de cada posição do segundo vetor.

		Saída:
		A saída deverá ser composta de apenas uma linha contendo o valor do produto escalar.

		Exemplo de entrada:
		5
		2.2
		3.5
		1
		2.8
		1.6
		1.2
		6.5
		3
		2
		1.65

		Exemplo de saída:
		36.63
	*/

	// Lendo vetores
	int n;
	cin >> n;

	float vetA[n];
	for (int i = 0; i < n; i++)
		cin >> vetA[i];

	float vetB[n];
	for (int i = 0; i < n; i++)
		cin >> vetB[i];

	// Calculando produto escalar
	cout << produtoEscalar(vetA, vetB, n) << endl;

	return 0;
}
