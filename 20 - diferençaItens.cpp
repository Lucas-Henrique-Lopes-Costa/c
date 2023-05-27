#include <iostream>

using namespace std;

int main()
{
    /*
        Gargamel irá mais uma vez tentar algo contra os Smurfs. Dessa vez, ele irá tentar não apenas uma, mas duas poções mágicas de uma única vez. Para isso, ele fez uma lista com os ingredientes de cada poção, para poder comprá-los na Lojinha da Maga Patalógica. Como ele fez duas listas, uma para cada poção, ele precisa agora juntá-las, mas destacando os itens da primeira lista que não fazem parte da segunda.

        Para ajudá-lo, você irá implementar um algoritmo que recebe duas listas de ingredientes (dois vetores de strings) e imprime apenas os itens que estão na primeira lista mas não estão na segunda. A impressão deverá ser feita seguindo a ordem da primeira lista. Considere que os itens das listas não possuem espaço, cada lista contém o número de ingredientes no topo e que nenhuma lista possui itens repetidos na própria lista. Caso todos os itens da primeira lista estejam presentes na segunda, imprima NADA (todo em maiúsculo).

        Entradas:

        Número de ingredientes da primeira lista.
        ingredientes (strings) da primeira lista, separados por espaço.
        Número de ingredientes da segunda lista.
        ingredientes (strings) da segunda lista, separados por espaço.
        Saídas:

        Elementos da lista resultante.
        Exemplo de Entrada:

        5
        asa_de_aranha
        pe_de_piranha
        pelo_de_minhoca
        olho_de_pedra
        glitter_rosa
        6
        glitter_rosa
        dente_de_rosa
        piolho_de_peixe
        pe_de_piranha
        pelo_de_minhoca
        bolor_laranja
        Exemplo de Saída:

        asa_de_aranha
        olho_de_pedra
        Exemplo de Entrada:

        5
        asa_de_aranha
        pe_de_piranha
        pelo_de_minhoca
        olho_de_pedra
        glitter_rosa
        6
        asa_de_aranha
        pe_de_piranha
        pelo_de_minhoca
        olho_de_pedra
        glitter_rosa
        piolho_de_peixe
        Exemplo de Saída:

        NADA
    */
    
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
    int contResultado = 0, cont = 0;

    for (int i = 0; i < n1; i++)
    {
        cont = 0;

        for (int j = 0; j < n2; j++)
        {
            if (lista1[i] == lista2[j])
            {
                cont++;
            }
        }

        if (cont == 0)
        {
            cout << lista1[i] << endl;
            contResultado++;
        }
    }

    if (contResultado == 0)
    {
        cout << "NADA" << endl;
    }

    return 0;
}
