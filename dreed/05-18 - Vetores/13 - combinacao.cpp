#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que preencha dois vetores com cinco elementos numéricos cada, que serão inseridos ordenados de maneira crescente pelo usuário. Deverá ser gerado um terceiro vetor com dez posições, composto pela junção dos elementos dos vetores anteriores, também ordenado de maneira crescente.

    Entradas:

    - Dois vetores ordenados de 5 elementos
    Saídas:

    - Vetor resultante com 10 números ordenados
    Entradas:
    1 3 5 7 9
    2 4 6 8 10
    Saídas:
    1 2 3 4 5 6 7 8 9 10
  */

  int v1[5], v2[5], v3[10];

  for (int i = 0; i < 5; i++)
  {
    cin >> v1[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cin >> v2[i];
  }

  

  return 0;
}