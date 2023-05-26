#include <iostream>

using namespace std;

int main()
{
    // recebe duas listas de ingredientes
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

    // imprime apenas os itens que estão na primeira lista mas não estão na segunda
    int contResultado = 0;
    string resultado[n1];

    for (int i = 0; i < n1; i++)
    {
        bool encontrou = false;

        // compara todos os elementos da lista 1 com a lista 2
        for (int k = 0; k < n2 and !encontrou; k++)
        {
            // se for igual para o for, e apaga os dados colocados
            if (lista1[i] == lista2[k])
            {
                encontrou = true;
                for (int l = 0; l < n1; l++)
                {
                    resultado[l] = "";
                }
            }
            // senão adiciona
            else
            {
                resultado[i] = lista1[i];
            }
        }

        // imprime os vetores resultado, sem pegar o vazio
        for (int i = 0; i < n1; i++)
        {
            if (resultado[i] != "")
            {
                cout << resultado[i] << endl;
                contResultado++;
            }
        }
    }

    // Caso todos os itens da primeira lista estejam presentes na segunda, imprima NADA (todo em maiúsculo).
    if (contResultado == 0)
    {
        cout << "NADA" << endl;
    }

    return 0;
}
