/*
Luthor irá mais uma vez tentar algo contra o Super-Homem. Dessa vez, ele irá tentar o plano XTPO-3000-PlusAzul. Para isso, ele fez uma lista com os materiais necessários e verificou que alguns itens estavam em falta. Ele tem uma relação em computador dos itens que precisa para a invenção e uma lista dos itens que tem em posse na sua fábrica (alguns dos quais não serão necessários no plano, inclusive). Assim, ele precisa verificar quais itens da primeira lista não constam na segunda lista para poder ir buscá-los em seu estoque no subsolo.

Para ajudá-lo, você irá implementar um algoritmo que recebe duas listas de materiais (dois vetores de strings) e imprime todos os itens que constam na primeira lista mas não constam na segunda lista. Os vetores devem ser implementados utilizando alocação dinâmica. A impressão deverá ser feita seguindo a ordem da primeira lista. Considere que os itens das listas não possuem espaço, cada lista contém o número de materiais no topo e que nenhuma lista possui itens repetidos na própria lista. Caso todos os itens da primeira lista estejam presentes na segunda, imprima NADA (todo em maiúsculo).

Entradas:
Número de ingredientes da primeira lista.
ingredientes (strings) da primeira lista, separados por espaço.
Número de ingredientes da segunda lista.
ingredientes (strings) da segunda lista, separados por espaço.

Saídas:
Elementos da lista resultante.

Exemplo de Entrada:
5
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
6
uranio_enriquecido
sulfato_de_titanio
bateria_18650
kriptonita_rosa
xisto
virus_simancol
Exemplo de Saída:

rubi_axial
cesio137
Exemplo de Entrada:

5
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
6
rubi_axial
kriptonita_rosa
xisto
cesio137
uranio_enriquecido
bateria_18650
Exemplo de Saída:

NADA
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  int n1;
  cin >> n1;
  string *lista1 = new string[n1];

  for (int i = 0; i < n1; i++)
  {
    cin >> lista1[i];
  }

  int n2;
  cin >> n2;
  string *lista2 = new string[n2];

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
