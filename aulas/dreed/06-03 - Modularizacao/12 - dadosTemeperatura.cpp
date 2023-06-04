#include <iostream>
using namespace std;

float menorTemperatura(float temp[])
{
	float menor = temp[0];

	for (int i = 0; i < 7; i++)
	{
		if (temp[i] < menor)
		{
			menor = temp[i];
		}
	}

	return menor;
}

float maiorTemperatura(float temp[])
{
	float maior = temp[0];

	for (int i = 0; i < 7; i++)
	{
		if (temp[i] > maior)
		{
			maior = temp[i];
		}
	}

	return maior;
}

void media(float temp[], float &media)
{
	float soma = 0;

	for (int i = 0; i < 7; i++)
	{
		soma += temp[i];
	}

	media = (soma / 7);
}

int contAbaixoTemperatura(float temp[], float media)
{
	int cont = 0;
	for (int i = 0; i < 7; i++)
	{
		if (temp[i] < media)
		{
			cont++;
		}
	}

	return cont;
}

int main()
{
	/*
		Faça um algoritmo para ler e armazenar em um vetor a temperatura média dos dias de uma semana (7 dias) (número real). Implemente um procedimento, com passagem por referência, para calcular: a) Menor temperatura da semana b) Maior temperatura da semana c) Temperatura média da semana d) O número de dias da semana em que a temperatura foi inferior a média semanal

		Os valores, calculados pelo procedimento, deverão ser impressos na função principal.

		Entradas:
		Temperatura de cada dia da semana

		Saídas:
		Menor temperatura da semana;
		Maior temperatura da semana;
		Temperatura média da semana;
		O número de dias da semana em que a temperatura foi inferior a média semanal.

		Exemplo de Entrada:
		26 27 40 38 35 33 27

		Exemplo de Saída:
		26
		40
		32.285
		3
	*/

	// Lendo vetores
	float temp[7];
	for (int i = 0; i < 7; i++)
		cin >> temp[i];

	// Menor temperatura
	cout << menorTemperatura(temp) << endl;

	// Maior temperatura
	cout << maiorTemperatura(temp) << endl;

	// Calculando a média da semana
	float mediaCalc;
	media(temp, mediaCalc);
	cout << mediaCalc << endl;

	// Mostrando quantas estão abaixo da média
	cout << contAbaixoTemperatura(temp, mediaCalc) << endl;

	return 0;
}
