#include <iostream>
#include <cmath>
using namespace std;

/*
    Lucas H.
    Pedro G.
*/

int verificaPar(int n, int &cont)
{
    if (n % 2 == 0)
    {
        return -1;
    }
    else
    {
        cont++;
        return n;
    }
}

int main()
{
    int n;
    cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    int contMain = 0;

    for (int i = 0; i < n; i++)
    {
        vetor[i] = verificaPar(vetor[i], contMain);
    }

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] != -1)
        {
            cout << vetor[i] << " ";
        }
    }

    cout << endl
         << contMain << endl;
}