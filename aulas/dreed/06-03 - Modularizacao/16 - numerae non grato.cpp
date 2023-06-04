#include <iostream>
using namespace std;

void media(float vet[], int n, float &media)
{
	float soma = 0;
	for (int i = 0; i < n; i++)
	{
		soma += vet[i];
	}
	media = soma / n;
}

int main()
{
	/*
		Você tem um conjunto de números reais e deseja filtrar alguns deles. Mais precisamente, você deseja descartar aqueles que estiverem fora de um determinado limite com relação à média.

		Entradas:
		A quantidade de valores.
		Cada um dos valores.
		A diferença máxima com relação à média (pode ser para mais ou para menos).
		
		Saídas:
		A média dos valores, que deve ser calculada em uma função.
		A diferença entre cada valor e a média dos valores, na forma de um número não negativo.
		Cada número que esteja dentro do limite, na ordem original. Se a diferença em relação à média for igual à diferença máxima, o valor está dentro do limite.
		
		Exemplo de entradas:
		5
		19.01 66.70 49.34 71.96 82.88 
		9.1
		
		Exemplo de saídas:
		57.978
		38.968 8.72199 8.638 13.982 24.902 
		66.7 49.34
	*/

	// Lendo vetores
	int n;
	cin >> n;

	float vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}

	float diferenca;
	cin >> diferenca;
	
	float mediaCalc;
	media(vet, n, mediaCalc);

	cout << mediaCalc << endl; // Calcula a média e imprime

	for (int i = 0; i < n; i++)
	{
		float dif = vet[i] - mediaCalc;
		if (dif < 0)
		{
			dif = -dif;
		}
		cout << dif << " ";
	}

	cout << endl;

	// Imprime os valores que estão dentro do limite
	for (int i = 0; i < n; i++)
	{
		float dif = vet[i] - mediaCalc;
		if (dif < 0)
		{
			dif = -dif;
		}
		if (dif <= diferenca)
		{
			cout << vet[i] << " ";
		}
	}

	cout << endl;

	return 0;
}
