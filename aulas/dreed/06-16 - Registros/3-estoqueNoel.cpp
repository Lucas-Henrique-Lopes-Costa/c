/*
Papai Noel recebeu muitas cartas de crianças pedindo presentes para o natal. Agora, ele precisa catalogar os presentes e verificar se os brinquedos produzidos pelos duendes ao longo do ano serão o suficiente. Você deverá ajudar o papai noel a resolver este problema.

O seu programa utilizará dois registros. O primeiro registro representa uma Cartinha, com os campos nome da criança e presente pedido. O segundo registro representa um Brinquedo, com os campos nome do brinquedo, quantidade disponível, e quantidade pedida.

O seu programa irá receber como entrada os nomes das crianças e seus pedidos de presentes, e também os nomes e quantidades disponíveis de cada brinquedo. Seu programa irá então exibir quais os brinquedos não terão quantidade disponível suficiente para atender aos pedidos. Papai Noel utilizará este programa para saber como organizar melhor o trabalho dos duendes. Obs: os nomes das crianças e dos presentes não têm espaços.

Entradas:
Número de cartinhas.
Nome da criança e presente pedido de cada cartinha.
Número de brinquedos.
Nome e quantidade disponível de cada brinquedo.

Saídas:
Nomes dos brinquedos cujas quantidades não são suficientes para atender aos pedidos.

Exemplo de Entrada:
4
João Boneco
Maria Boneco
Pedro Carrinho
Ana Bola

3
Boneco 1
Bola 0
Carrinho 1
Exemplo de Saída:

Boneco Bola

Exemplo de Entrada:
5
João Videogame
Maria Boneca
Amanda Boneca
Juliana Boneca
Pedro Videogame

3
Bola 5
Videogame 2
Boneca 2

Exemplo de Saída:
Boneca
*/

#include <iostream>
using namespace std;

struct Cartinha
{
  string nome;
  string presente;
};

struct Brinquedo
{
  string nome;
  int quantidadeDisponivel;
  int quantidadePedida;
};

int main()
{
  int n;
  cin >> n;

  Cartinha cartinhas[n];

  for (int i = 0; i < n; i++)
  {
    cin >> cartinhas[i].nome >> cartinhas[i].presente;
  }

  int p;
  cin >> p;

  Brinquedo brinquedos[p];

  for (int i = 0; i < p; i++)
  {
    cin >> brinquedos[i].nome >> brinquedos[i].quantidadeDisponivel;
    brinquedos[i].quantidadePedida = 0;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      if (cartinhas[i].presente == brinquedos[j].nome)
      {
        brinquedos[j].quantidadePedida++;
      }
    }
  }

  for (int i = 0; i < p; i++)
  {
    if (brinquedos[i].quantidadeDisponivel < brinquedos[i].quantidadePedida)
    {
      cout << brinquedos[i].nome << " ";
    }
  }

  cout << endl;

  return 0;
}