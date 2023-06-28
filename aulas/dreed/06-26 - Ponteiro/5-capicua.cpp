#include <iostream>
using namespace std;

int main()
{
	int tamanho;
	cin >> tamanho;
	int *capicua = new int[tamanho];

	for (int i = 0; i < tamanho; i++)
	{
		cin >> capicua[i];
	}
	bool sim = true;
	int i = 0;

	if (tamanho == 0)
	{
		sim = false;
	}

	if (tamanho == 1)
	{
		cout << 0 << " " << capicua[0];
	}
	else
	{
		while (i < tamanho - 1 and sim)
		{
			tamanho--;
			if (capicua[i] != capicua[tamanho])
			{
				sim = false;
			}
			else
			{
				if (capicua[i] == capicua[tamanho])
				{
					cout << i << " ";
					cout << capicua[i] << " ";
					cout << tamanho << " ";
					cout << capicua[tamanho] << " ";
				}
			}
			i++;
		}
	}

	if (sim)
	{
		cout << endl
				 << "sim";
	}
	else
	{
		cout << "nao";
	}

	delete[] capicua;

	return 0;
}