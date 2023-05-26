#include <iostream>

using namespace std;

int main()
{
    // leitura das listas
    int n1;
    cin >> n1;
    string lista1[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> lista1[i];
    }

    int n2;
    cin >> n2;
    string lista2[n2];

    for (int i = 0; i < n2; i++)
    {
        cin >> lista2[i];
    }

    int n3;
    cin >> n3;
    string lista3[n3];

    for (int i = 0; i < n3; i++)
    {
        cin >> lista3[i];
    }

    // encontrar o que é parecido
    int cont = 0;

    for (int i = 0; i < n3; i++)
    {

        cont = 0;

        for (int j = 0; j < n2; j++)
        {

            if (lista3[i] == lista2[j])
            {
                cont++;
            }
        }

        for (int k = 0; k < n1; k++)
        {

            if (lista3[i] == lista1[k])
            {
                cont++;
            }
        }

        cout << cont << " ";
    }

    cout << endl;

    return 0;
}