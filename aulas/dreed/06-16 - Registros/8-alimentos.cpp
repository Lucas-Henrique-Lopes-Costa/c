/*
Os visitantes do Parque Jellystone agora tem uma nova opção para facilitar seus passeios: adquirir cestas de piquenique preparadas no próprio parque. São vários tipos de cestas, com um conjunto de itens pré-definido, identificadas por diferentes nomes. Para facilitar a venda das cestas, o guarda Smith ordenou que fosse criado um registro com o nome do visitante que a comprou e o nome da cesta, e para facilitar o preparo das cestas, há um outro registro com o nome da cesta e a quantidade de porções que a compõe. Zé Colméia e Catatau adoraram a ideia pois agora ficou mais fácil conseguir um conjunto maior de guloseimas nas cestas que eles roubam dos visitantes. Para ajudá-los, faça um programa que leia a quantidade de cestas preparadas para venda e as informações das cestas preparadas. Em seguida, leia a quantidade de cestas vendidas e as informações das cestas vendidas. Por fim, calcule quantas porções de guloseimas Zé Colmeia e Catatau podem conseguir caso roubem todas as cestas vendidas.

Considere que não há cestas com mesmo nome e quantidade diferente de porções, e que não há espaços nos nomes dos visitantes ou das cestas.

Entradas:
quantidade de cestas disponíveis para preparo
informações sobre as cestas disponíveis para preparo
quantidade de cestas vendidas
informações sobre as cestas vendidas
Saídas:

quantidade de porções de guloseimas conseguidas por Zé Colméia e Catatau

Exemplo de Entrada:
6
luxo 20
familia 18
amigos 15
solteiro_plus 10
light 8
economica 5
10
Ze_Buscape familia
Chuvisco solteiro_plus
Capitao_Caverna familia
Silvester_Soluco economica
Cabong amigos
Peter_Popotamus economica
Penelope_Charmosa luxo
Dick_Vigarista economica
Dumdum amigos
Formiga_atomica familia

Exemplo de Saída:
129

Exemplo de Entrada:
4
familia 18
solteiro_plus 10
economica 5
brinquedos 0
1
Bobi brinquedos

Exemplo de Saída:
0
*/

#include <iostream>
using namespace std;

struct Visitantes
{
  string nome;
  string nomeCesta;
};

struct Cestas
{
  string nome;
  int porcoes;
};

int main()
{
  int quantidadeCesta;
  cin >> quantidadeCesta;

  Cestas cesta[quantidadeCesta];

  for (int i = 0; i < quantidadeCesta; i++)
  {
    cin >> cesta[i].nome >> cesta[i].porcoes;
  }

  int quantidadeVendida;
  cin >> quantidadeVendida;

  Visitantes visitante[quantidadeVendida];

  int porcoesRoubadas = 0;
  for (int i = 0; i < quantidadeVendida; i++)
  {
    cin >> visitante[i].nome >> visitante[i].nomeCesta;
    for (int j = 0; j < quantidadeCesta; j++)
    {
      if (visitante[i].nomeCesta == cesta[j].nome)
      {
        porcoesRoubadas += cesta[j].porcoes;
      }
    }
  }
  
  cout << porcoesRoubadas << endl;

  return 0;
}
