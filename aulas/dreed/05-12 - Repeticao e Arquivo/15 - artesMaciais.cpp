#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Um grande torneio de artes marciais irá acontecer e a única restrição para os participantes é que os mesmos devem ter pontos dentro de uma faixa pré determinada (entre A incluído e B incluído ), ou seja, pelo menos A pontos e no máximo B pontos. Escreva um programa que leia valores inteiros para A e B, assim como os pontos de todos os inscritos e informe quantos deles serão classificados por satisfazerem as restrições. O valores que representam a faixa deverão e os pontos dos inscritos deverão ser lidos em um arquivo dados.txt.

    Entradas (arquivo dados.txt):

    Dois valores (números inteiros) representando os limites inferior e superior de pontos para o torneio (intervalo fechado). Assuma que o limite inferior sempre será menor do que o limite superior.
    Sequência de valores (números inteiros) representando os pontos dos competidores inscritos.
    Saídas:

    A quantidade de competidores classificados por estarem dentro das restrições de pontos.
    Exemplo de entrada (arquivo dados.txt)::

    50 100 
    43 75 120 64 32 50
    Exemplo de saída:

    3
    Note que no exemplo acima, os valores classificados foram os 75, 64 e 50, pois eles estão no intervalo [50,100].

    Exemplo de entrada (arquivo dados.txt)::

    5 8
    4 5 6 7 8 9
    Exemplo de saída:

    4
  */

  ifstream arquivo("dados.txt");

  int a, b, pontos, classificados = 0;
  arquivo >> a >> b;

  while (arquivo >> pontos)
  {
    if (pontos >= a && pontos <= b)
      classificados++;
  }

  cout << classificados << endl;
  
  return 0;
}
