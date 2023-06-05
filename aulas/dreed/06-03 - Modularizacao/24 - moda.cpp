#include <iostream>
using namespace std;

int moda(int notas[], int tamanho)
{
	int moda = 0;
	int vetModas[tamanho];
	int j = 0;

	for (int i = 0; i < tamanho; i++)
	{
		int cont = 0;
		for (int j = 0; j < tamanho; j++)
		{
			// cout << "Comparando " << notas[i] << " com " << notas[j] << endl;
			if (notas[i] == notas[j])
			{
				// cout << "Econtrei" << endl;
				cont++;
			}
		}

		if (cont > moda)
		{
			moda = cont;

			j++;
			// cout << "Indice: " << j << endl;
			vetModas[j] = notas[i];
		}
	}

	return vetModas[j];
}

int main()
{
	/*
		Os professores de GAC124 precisam gerar estatísticas sobre o desempenho dos alunos que cursam essa disciplina. Para isso, implemente uma função que receba como parâmetro de entrada um vetor contendo as notas dos alunos em uma prova e retorne o valor da sua moda. É chamado de moda o valor mais frequente de um conjunto de valores. As notas dos alunos são valores inteiros que variam entre 0 e 10 (incluindo esses valores) e são no máximo 60 alunos.

		OBS: Desconsidere o caso em que o conjunto de valores tenha mais de uma moda (haverá sempre apenas uma moda).

		Todas as operações de entrada e saídas de dados devem estar na função principal.

		Entrada:
		Quantidade de notas a serem informadas.
		Sequência de notas dos alunos (inteiros no intervalo [0,10]). Toda a sequência será fornecida em uma única linha.

		Saída:
		O valor da moda.

		Exemplo de Entrada:
		9
		10 5 2 7 4 5 9 5 7

		Exemplo de Saída:
		5

		Exemplo de Entrada:
		12
		5 4 9 7 2 4 3 9 5 4 2 1

		Exemplo de Saída:
		4
	*/

	// Lendo vetores
	int n;
	cin >> n;

	int notas[n];
	for (int i = 0; i < n; i++)
		cin >> notas[i];

	// Calculando moda
	cout << moda(notas, n) << endl;

	return 0;
}
