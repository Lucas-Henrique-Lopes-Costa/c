/*
Faça um programa que lê dados de vários produtos, ordena-os e escreve aqueles que estiverem dentro de uma faixa de preços.

Inicialmente o programa deverá ler a quantidade de produtos que deve ser lida. Cada produto deve ser representado por um registro que tem identificador (número inteiro), descrição (sequência de caracteres - 79 caracteres são suficientes) e preço (número real). Os campos dos produtos devem ser lidos na ordem mencionada anteriormente, sendo que podem haver espaços na descrição do produto. Considere que cada um dos campos será digitado numa linha e que pode haver uma linha em branco entre os produtos.

Após a leitura, os produtos deverão ser ordenados por preço. Depois o programa deverá ler um preço mínimo e um máximo. Por fim, o programa deverá escrever em ordem crescente de preço todos os produtos cujo preço está no intervalo determinado. O intervalo é fechado em ambos os limites.

O programa deverá fazer uso de modularização. É obrigatório o uso do MergeSort ou QuickSort para fazer a ordenação.

Dica: para descartar um final de linha antes da leitura de uma linha, evitando assim a leitura de uma string vazia para uma linha, na linguagem C++, recomenda-se o uso do comando ignore, como em cin.ignore(2, '\n') que ignora até dois caracteres na tentativa de encontrar um final de linha.

Entradas:
O número de produtos
Os dados de cada produto
O identificador do produto (número inteiro)
A descrição do produto (pode conter espaços - não terá mais que 79 caracteres)
O preço do produto (número real)
O limite inferior da faixa de preços (número real)
O limite superior da faixa de preços (número real)

Saídas:
Os dados de cada produto cujo preço está no intervalo determinado, do produto de menor preço para o produto de maior preço. Todos os campos do produto deverão ser escritos na ordem mencionada acima, numa mesma linha separados por espaços. O programa deverá escrever aspas em volta da descrição do produto.

Exemplo de Entrada:
3

4352
Lancheira Sestini
99.90

3641
Mochila 14 Xeryus
149.90

3556
Compasso 559 Basic Flex
33.90

40
200

Exemplo de Saída:
4352 "Lancheira Sestini" 99.9
3641 "Mochila 14 Xeryus" 149.9
*/
#include <iostream>
using namespace std;

struct Produto
{
  int id;
  string descricao;
  float preco;
};

void intercala(Produto *produtos, int inicio, int meio, int fim)
{
  int i = inicio;
  int j = meio + 1;
  int k = 0;
  Produto *aux = new Produto[fim - inicio + 1];

  while (i <= meio && j <= fim)
  {
    if (produtos[i].preco < produtos[j].preco)
    {
      aux[k] = produtos[i];
      i++;
    }
    else
    {
      aux[k] = produtos[j];
      j++;
    }
    k++;
  }

  while (i <= meio)
  {
    aux[k] = produtos[i];
    i++;
    k++;
  }

  while (j <= fim)
  {
    aux[k] = produtos[j];
    j++;
    k++;
  }

  for (int i = inicio; i <= fim; i++)
  {
    produtos[i] = aux[i - inicio];
  }

  delete[] aux;
}

void mergeSort(Produto *produtos, int inicio, int fim)
{
  if (inicio < fim)
  {
    int meio = (inicio + fim) / 2;
    mergeSort(produtos, inicio, meio);
    mergeSort(produtos, meio + 1, fim);
    intercala(produtos, inicio, meio, fim);
  }
}

int main()
{
  int n;
  cin >> n;

  Produto *produtos = new Produto[n];

  for (int i = 0; i < n; i++)
  {
    cin >> produtos[i].id;
    cin.ignore();
    getline(cin, produtos[i].descricao);
    cin >> produtos[i].preco;
  }

  float min, max;
  cin >> min >> max;

  // Ordenando os produtos
  mergeSort(produtos, 0, n - 1);

  // Imprimindo os produtos
  for (int i = 0; i < n; i++)
  {
    if (produtos[i].preco >= min && produtos[i].preco <= max)
    {
      cout << produtos[i].id << " \"" << produtos[i].descricao << "\" " << produtos[i].preco << endl;
    }
  }
  
  return 0;
}
