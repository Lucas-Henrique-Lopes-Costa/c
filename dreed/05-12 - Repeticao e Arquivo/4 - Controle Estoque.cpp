#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Uma fábrica de computadores produz e vende vários produtos. Para manter o controle dos produtos, são armazenadas informações de nome, quantidade produzida e quantidade vendida.
    Implemente um algoritmo capaz de ler informações de vários produtos. O usuário irá fornecer o número de produtos que serão lidos e em seguida as informações dos produtos, em um arquivo estoque.txt. A partir desses dados, você deve calcular quantos de cada produto ainda há em estoque, quantos produtos tem menos de 50 itens em estoque (BAIXO ESTOQUE) e qual o produto com maior quantidade em estoque.

    Entradas (arquivo estoque.txt):

    Quantidade de produtos que serão lidos (inteiro)
    Para cada produto:
    Nome (string)
    Quantidade produzida (inteiro)
    Quantidade vendida (inteiro)
    Saídas (saída padrão):


    Para cada produto:
    Nome
    Quantidade em estoque
    uma mensagem (BAIXO ESTOQUE) se o produto tiver menos de 50 itens no estoque

    No final:
    Nome e quantidade do produto com maior estoque
    Exemplo de Entrada (arquivo estoque.txt):

    5
    Mouse 500 410
    Teclado 820 780
    Fonte 225 129
    Webcan 300 217
    Camera 1024 1002
    Exemplo de Saída:

    Mouse 90
    Teclado 40 BAIXO ESTOQUE
    Fonte 96
    Webcan 83
    Camera 22 BAIXO ESTOQUE
    Fonte 96
  */

  ifstream arquivoIn("estoque.txt");

  int quantidade, maiorEstoqueQuantidade = 0;
  string maiorEstoqueNome;
  arquivoIn >> quantidade;

  for (int i = 0; i < quantidade; i++)
  {
    string nome;
    int quantidadeProduzida, quantidadeVendida;

    arquivoIn >> nome;
    arquivoIn >> quantidadeProduzida >> quantidadeVendida;

    int sobra = quantidadeProduzida - quantidadeVendida;

    cout << nome << " " << sobra << " ";
    if (sobra < 50)
    {
      cout << "BAIXO ESTOQUE";
    }
    cout << endl;

    if (sobra > maiorEstoqueQuantidade)
    {
      maiorEstoqueQuantidade = sobra;
      maiorEstoqueNome = nome;
    }
  }

  cout << maiorEstoqueNome << " " << maiorEstoqueQuantidade << endl;

  return 0;
}
