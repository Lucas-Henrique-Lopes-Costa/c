#include <iostream>

using namespace std;

int main()
{
    /*
        Faça um programa que receba três listas de strings. Cada lista representa um conjunto de elementos. Cada lista será digitada em uma linha específica. Será garantido que as duas primeiras listas serão diferentes.

        Seu programa deverá exibir no dispositivo de saída padrão, para cada palavra da terceira lista, se a palavra em questão apareceu em nenhuma, uma ou nas duas listas iniciais.

        Entradas:

        Três listas de strings. Cada lista será fornecida em uma linha específica, com a quantidade de palavras no início.
        Saídas:

        Sequência de valores que denotam se cada palavra da terceira lista apareceu em nenhuma, uma ou nas duas listas iniciais.
        Exemplo de Entrada:

        4 bola garrafa pedra cachorro
        3 cachorro pedra pato
        5 bola garrafa pato cachorro pedra
        Exemplo de Saída:

        1 1 1 2 2
        Exemplo de Entrada:

        4 bola garrafa pedra cachorro
        3 cachorro pedra pato
        2 cachorro pedra
        Exemplo de Saída:

        2 2
        Exemplo de Entrada:

        4 bola garrafa pedra cachorro
        3 cachorro pedra pato
        3 cachorro pedra sapato
        Exemplo de Saída:

        2 2 0
    */
    
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