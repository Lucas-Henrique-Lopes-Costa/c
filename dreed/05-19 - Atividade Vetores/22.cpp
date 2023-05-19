#include <iostream>

using namespace std;

int main()
{
    int vetor[15];
    for (int i = 0; i < 15; i++)
    {
        cin >> vetor[i];
    }
    int maior = vetor[0];
    for (int i = 1; i < 15; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    for (int i = 0; i < 15; i++)
    {
        int divisaoInteira = vetor[i] / maior;
        cout << divisaoInteira << " ";
    }
}