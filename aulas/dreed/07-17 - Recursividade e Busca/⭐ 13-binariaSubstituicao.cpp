/*
Dada uma coleção de números inteiros ordenados, um valor de busca e um valor de substituição, substitua o valor de busca pelo valor de substituição. Para encontrar o valor de busca, a busca binária deve ser utilizada, contando o número de comparações feitas na busca. Caso o valor de busca não exista na coleção, nenhuma substituição será realizada.

No caso de coleção com quantidade par de elementos, deve-se considerar que o elementos mais à esquerda é o elemento do meio. Caso haja repetição de valores na coleção de números, o primeiro encontrado pela busca binária é o único que deve ser substituído.

Após a substituição (que pode não ter ocorrido de fato), o programa deve imprimir os valores da coleção e o número de comparações realizadas na busca.

Entradas:
Quantidade de valores do vetor (número inteiro positivo);
valores da coleção em ordem crescente (números inteiros);
valor de busca (número inteiro);
valor de substituição (número inteiro).

Saídas:
Valores de coleção na ordem em que estão armazenados, após o processamento;
número de comparações realizadas na busca.

Exemplo de Entrada:
6
1 2 3 4 5 6
5
-1

Exemplo de Saída:
1 2 3 4 -1 6
2

Exemplo de Entrada:
5
1 2 3 4 5 
6
3

Exemplo de Saída:
1 2 3 4 5
3
*/
#include <iostream>
using namespace std;

int buscaBinaria(int vetor[], int numeroProcurado, int inicio, int fim, int &index, int &contComparacoes)
{
  if (inicio <= fim)
  {
    index = (inicio + fim) / 2;
    contComparacoes++;

    if (vetor[index] == numeroProcurado)
    {
      return index;
    }
    else if (vetor[index] < numeroProcurado)
    {
      inicio = index + 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);
    }
    else
    {
      fim = index - 1;
      buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);
    }
  }
  else
  {
    index = -1;
    return index;
  }

  return 0;
}

int main()
{
  int tamanhoVetor;
  cin >> tamanhoVetor;

  int vetor[tamanhoVetor];
  for (int i = 0; i < tamanhoVetor; i++)
  {
    cin >> vetor[i];
  }

  int numeroProcurado;
  cin >> numeroProcurado;

  int valorSubstitui;
  cin >> valorSubstitui;

  int inicio = 0;
  int fim = tamanhoVetor - 1;

  int index, contComparacoes = 0;
  buscaBinaria(vetor, numeroProcurado, inicio, fim, index, contComparacoes);

  if (index >= 0)
  {
    vetor[index] = valorSubstitui;
  }

  for (int i = 0; i < tamanhoVetor; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  cout << contComparacoes << endl;

  return 0;
}