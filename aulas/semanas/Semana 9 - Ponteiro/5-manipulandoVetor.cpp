#include <iostream>
using namespace std;

int main()
{
	int vetor[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> vetor[i];
	}

	int *ptr = vetor; // usando ponteiro para imprimir os dados do vetor
	for (int i = 0; i < 10; i++)
	{
		cout << ptr[i] << endl;
	}
}