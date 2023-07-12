/*
Um supermercado está cadastrando seus produtos utilizando as seguintes informações: nome do produto, marca e preço. Para facilitar a listagem dos produtos, implemente um algoritmo para listar os produtos ordenados por preço (do mais barato para o mais caro). Se houver mais de um produto com o mesmo preço, utilizar como critério de desempate os nomes em ordem alfabética. Utilize o algoritmo de ordenação shellsort. A listagem gerada deverá conter o nome do produto, a marca e o preço.

Entradas:
Quantidade de produtos
Nome do produto, marca e preço

Saídas:
Listagem de produtos ordenados

Exemplo de Entrada:
6
vassoura Rossi 5.50
margarina Doriana 9.0
margarina Qualy 5.50
vassoura Betani 12.00
vassoura Pelos 8.00
vassoura Tenor 7.90

Exemplo de Saída:
margarina Qualy 5.50
vassoura Rossi 5.50
vassoura Tenor 7.90
vassoura Pelos 8.00
margarina Doriana 9.0
vassoura Betani 12.0
*/
#include <iostream>
using namespace std;

struct Produtos
{
  string nome;
  string marca;
  float preco;
};

void shellSortLexicalmente(Produtos produto[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if ((i != j) && produto[i].preco == produto[j].preco)
      {
        if (produto[i].nome > produto[j].nome)
        {
          Produtos aux;
          aux = produto[i];
          produto[i] = produto[j];
          produto[j] = aux;
        }
      }
    }
  }
}

void shellSortPreco(Produtos produto[], int size)
{
  // sequência de Ciura, a que tem os melhores resultados experimentais
  int gaps[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int pos_gap = 8;
  while (gaps[pos_gap] > size)
  {
    pos_gap--;
  }

  Produtos value;
  int j;

  while (pos_gap >= 0)
  {
    int gap = gaps[pos_gap];

    for (int i = gap; i < size; i++)
    {
      value = produto[i];
      j = i;
      while ((j >= gap) && (value.preco < produto[j - gap].preco))
      {
        produto[j] = produto[j - gap];
        j = j - gap;
      }
      produto[j] = value;
    }

    pos_gap--;
  }
}

int main()
{
  int n;
  cin >> n;

  Produtos produto[n];

  for (int i = 0; i < n; i++)
  {
    cin >> produto[i].nome;
    cin >> produto[i].marca;
    cin >> produto[i].preco;
  }

  // shellsort
  shellSortPreco(produto, n);
  shellSortLexicalmente(produto, n);

  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << produto[i].nome << " ";
    cout << produto[i].marca << " ";
    cout << produto[i].preco << endl;
  }

  return 0;
}
