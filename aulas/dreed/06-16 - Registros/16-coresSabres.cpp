/*
A Ordem dos Cavaleiros Jedi é formada por indivíduos que lutam contra o lado negro da Força. Eles têm uma posição na hierarquia de acordo com seu treinamento ou experiência, podendo ser Padawans, Cavaleiros ou Mestres. Os Jedis utilizam Sabres de Luz construídos utilizando cristais específicos que definem a cor da luz emitida pelo sabre.

Faça um programa que defina um registro para armazenar os seguintes dados: nome do Jedi, posição na hierarquia, cristal do qual o sabre de luz é feito e cor.

O programa deverá ler os dados de vários Jedis (guardando-os nos registros exatamente como descrito acima). O programa lerá também uma cor como entrada e exibirá, para cada posição na hierarquia Jedi a quantidade de Jedis que possuem sabres de luz da cor lida.

Obs: os nomes dos Jedis, as posições na hierarquia, os nomes dos cristas e das cores não possuem espaços.

Entradas:

Quantidade de Jedis a serem lidos.
Sequência de valores para os registros de Jedis, seguindo a ordem: nome, posição na hierarquia, cristal e cor.
Uma cor a ser utilizada para encontrar a quantidade de Jedis de cada posição na hierarquia.
Saídas:

Sequência de valores contendo a posição na hierarquia e a quantidade de Jedis cujos sabres de luz são da cor indicada na entrada. Obs: as posições na hierarquia devem ser exibidas na mesma ordem em que apareceram na entrada. Dica: use um vetor auxiliar de hierarquia para verificar essa ordem.
Exemplo de entrada:

4
Yoda Mestre Esmeralda Verde
Luke Cavaleiro Azurita Azul
Anakin Padawan Rubi Vermelho
Obi-wan Cavaleiro Topazio Azul
Azul
Exemplo de saída:

Mestre 0
Cavaleiro 2
Padawan 0
*/
#include <iostream>
using namespace std;

struct Jedis
{

  string nome;
  string classe;
  string cristal;
  string cor;
  int quantidade;
};

int main()
{

  int qtJedi;
  cin >> qtJedi;

  Jedis jedi[qtJedi];

  string pedro[qtJedi]; // pedro = auxiliar

  int cont = 0;
  int cont2 = 0;

  for (int i = 0; i < qtJedi; i++)
  {
    cin >> jedi[i].nome;
    cin >> jedi[i].classe;
    cin >> jedi[i].cristal;
    cin >> jedi[i].cor;
    cont2 = 0;
    for (int j = 0; j < qtJedi; j++)
    {
      if (jedi[i].classe != pedro[j])
        cont2++;
    }

    if (cont2 == qtJedi)
    {
      pedro[cont] = jedi[i].classe;
      cont++;
    }
  }

  string corBase;
  cin >> corBase;

  int lucas[cont]; // lucas = vetor de quantidade

  for (int i = 0; i < cont; i++)
  {
    lucas[i] = 0;
  }

  for (int i = 0; i < cont; i++)
  {
    for (int j = 0; j < qtJedi; j++)
    {
      if (jedi[j].classe == pedro[i])
      {
        if (jedi[j].cor == corBase)
          lucas[i]++;
      }
    }
  }

  for (int i = 0; i < cont; i++)
  {
    cout << pedro[i] << " " << lucas[i] << endl;
  }

  return 0;
}
