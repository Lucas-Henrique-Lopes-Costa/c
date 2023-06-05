#include <iostream>
using namespace std;

void verificaRepetidas(int vetLogica[], int vetAed[])
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (vetLogica[i] == vetAed[j])
			{
				cout << vetLogica[i] << endl;
			}
		}
	}
}

int main()
{
	/*
		Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas de Lógica e AED1.

		Coloque os números das matrículas dos alunos que cursam Lógica em um vetor de quinze alunos. Coloque os números das matrículas dos alunos que cursam AED1 em outro vetor, de dez alunos. Mostre o número das matrículas que aparecem nos dois vetores.

		Obs.: A verificação deverá ser realizada por meio de um procedimento ou função, planeje bem seus parâmetros.

		Entrada:
		Cada linha da entrada deve conter um número de matrícula. Serão necessários 25 números: 15 para o primeiro vetor e 10 para o segundo vetor, nesta ordem. Cada número de matrícula é um valor inteiro.

		Exemplo:
		20122234
		20122002
		20122345
		20122022
		20122035
		20122070
		20122456
		20122123
		20122321
		20122789
		20122987
		20122923
		20122124
		20122001
		20122567
		20122678
		20122234
		20122453
		20122345
		20122456
		20122098
		20122890
		20122123
		20122001
		20122789

		Saída:
		Cada linha da saída deve conter um número de matrícula que esteja simultaneamente nos dois vetores, mantendo a ordem em que eles aparecem no vetor da disciplina de Lógica.

		Exemplo:
		20122234
		20122345
		20122456
		20122123
		20122789
		20122001
	*/

	// Lendo vetores
	int vetLogica[15];
	for (int i = 0; i < 15; i++)
	{
		cin >> vetLogica[i];
	}

	int vetAed[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> vetAed[i];
	}

	// Verificando matriculas repetidas
	verificaRepetidas(vetLogica, vetAed);

	cout << endl;

	return 0;
}
