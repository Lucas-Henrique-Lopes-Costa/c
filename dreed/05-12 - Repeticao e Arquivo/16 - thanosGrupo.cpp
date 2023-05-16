#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Avalie as chances de sucesso de Thanos contra um grupo de heróis, implementando um algoritmo para informar a ele quantos golpes serão necessários para dizimar por completo esses inimigos. Para isso, ele irá receber, no arquivo heroi.txt, para cada herói, a quantidade inicial de energia vital e quanto de energia ele perde a cada golpe aplicado por Thanos. O número de heróis não é conhecido, sendo que o algoritmo irá terminar quando chegar ao fim do arquivo.

    Entradas (arquivo heroi.txt), tendo para cada herói:

    energia vital inicial (um inteiro)
    quantidade de energia perdida a cada golpe recebido (um inteiro)
    Saídas:

    Quantidade de golpes necessários para Thanos dizimar o grupo de heróis
    Exemplo de Entrada (arquivo heroi.txt):

    50 10
    456 25
    301 18
    99 9
    100 25
    Exemplo de Saída:

    56
    Exemplo de Entrada (arquivo heroi.txt):

    20 20
    10 40
    10 50
    Exemplo de Saída:

    3
  */

  ifstream arquivo("heroi.txt");

  int energia, golpe, golpes = 0;

  while (arquivo >> energia >> golpe)
  {
    while (energia > 0)
    {
      energia -= golpe;
      golpes++;
    }
  }

  cout << golpes << endl;

  return 0;
}
