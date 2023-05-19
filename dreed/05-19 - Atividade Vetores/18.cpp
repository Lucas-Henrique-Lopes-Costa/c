#include <iostream>
using namespace std;

int main()
{
    float vetorA[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> vetorA[i];
    }

    float vetorB[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> vetorB[i];
    }

    float vetorC[10];

    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = (vetorA[i] + vetorB[(9 - i)]) / 2.0;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << vetorC[i] << endl;
    }

    float menorA = vetorA[0];

    for (int i = 0; i < 10; i++)
    {
        if (menorA > vetorA[i])
        {
            menorA = vetorA[i];
        }
    }

    float maiorA = menorA, segundoA = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetorA[i] > maiorA)
        {
            segundoA = maiorA;
            maiorA = vetorA[i];
        }
        else if (segundoA < vetorA[i])
        {
            segundoA = vetorA[i];
        }
    }

    cout << endl;

    cout << maiorA << endl << segundoA << endl;

    float menorB = vetorB[0];

    for (int i = 0; i < 10; i++)
    {
        if (menorB > vetorB[i])
        {
            menorB = vetorB[i];
        }
    }

    float maiorB = menorB, segundoB = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetorB[i] > maiorB)
        {
            segundoB = maiorB;
            maiorB = vetorB[i];
        }
        else if (segundoB < vetorB[i])
        {
            segundoB = vetorB[i];
        }
    }

    cout << endl;

    cout << maiorB << endl
         << segundoB << endl;

    return 0;
}
