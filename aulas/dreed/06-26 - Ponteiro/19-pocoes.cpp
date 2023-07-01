/*
Gargamel irá mais uma vez tentar algo contra os Smurfs. Dessa vez, ele irá tentar não apenas uma, mas duas poções mágicas de uma única vez. Para isso, ele fez uma lista com os ingredientes de cada poção, para poder comprá-los na Lojinha da Maga Patalógica. Como ele fez duas listas, uma para cada poção, ele precisa agora juntá-las, mas destacando os itens da primeira lista que não fazem parte da segunda.

Para ajudá-lo, você irá implementar um algoritmo que armazena os valores da primeira lista em um vetor alocado dinamicamente. Em seguida, irá receber, via dispositivo de entrada padrão, cada item da segunda lista. Caso o item lido ainda não esteja presente na lista armazenada, o vetor deve ser redimensionado com o aumento de uma posição e o valor armazenado. Caso contrário, um novo valor é lido. Considere que os itens das listas não possuem espaço e que nenhuma lista possui itens repetidos na própria lista. Ao final, imprima o tamanho resultante do vetor e os seus itens.

Entradas:
Quantidade de ingredientes da primeira lista.
Ingredientes (strings) da primeira lista.
Quantidade de ingredientes da segunda lista.
Ingredientes (strings) da segunda lista.

Saídas:
Tamanho do vetor resultante.
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
8
asa_de_aranha
pe_de_piranha
pelo_de_minhoca
olho_de_pedra
glitter_rosa
dente_de_rosa
piolho_de_peixe
bolor_laranja
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string *vetor = new string[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor[i];
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++)
  {
    string ingrediente;
    cin >> ingrediente;

    bool existe = false;
    int j = 0;
    while (!existe && j < n)
    {
      if (vetor[j] == ingrediente)
      {
        existe = true;
      }
      j++;
    }

    if (!existe)
    {
      string *aux = new string[n + 1];
      copy(vetor, vetor + n, aux);
      aux[n] = ingrediente;

      delete[] vetor;
      vetor = aux;

      n++;
    }
  }

  cout << n << endl;
  for (int i = 0; i < n; i++)
  {
    cout << vetor[i] << endl;
  }

  return 0;
}
