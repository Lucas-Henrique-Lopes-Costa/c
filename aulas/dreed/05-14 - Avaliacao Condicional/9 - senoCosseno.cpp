#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  /*
    Muitos programas comumente oferecem diversas funções para o usuário. Em um programa gráfico o usuário escolhe a função que deseja através de componentes gráficos como menus e botões. Já em programas de linha de comando podemos deixar o usuário escolher uma função através de códigos ou símbolos.

    Seguindo essa linha faça um programa que permita ao usuário solicitar o cálculo do seno ou do cosseno de um ângulo, e este ângulo pode ser fornecido em graus ou radianos.

    Para isso o usuário deverá primeiro informar uma letra para dizer se deseja o cálculo de seno ou cosseno (s ou c). Em seguida, ele deve informar outra letra dizer se o ângulo a ser fornecido será dado em graus ou radianos (g ou r). Por fim, o usuário deve informar um número decimal com o ângulo desejado. O programa deve então calcular o seno ou cosseno do ângulo informado de acordo com a definição do usuário.

    Obs.: soluções em Python devem utilizar funções da biblioteca math. Soluções em C++ devem usar a biblioteca cmath.

    Entradas:

    Uma letra, s ou c, indicando se será calculado o seno ou o cosseno, respectivamente.
    Uma letra, g ou r, indicando se o ângulo a ser informado está em graus ou radianos.
    Um número decimal representando o ângulo desejado, que pode estar em graus ou radianos
    Saídas:

    O valor do seno ou cosseno do ângulo passado.
    Exemplo de entrada:

    c
    g
    90
    Exemplo de saída:

    0
    Exemplo de Entrada:

    s
    r
    0.5
    Exemplo de Saída:

    0.4794
  */

  char funcao, tipo;
  double angulo;

  cin >> funcao >> tipo >> angulo;

  const double PI = acos(-1.0);

  if (tipo == 'g')
    angulo = angulo * PI / 180;

  if (funcao == 's')
    cout << fixed << setprecision(4) << sin(angulo) << endl;
  else
    cout << fixed << setprecision(4) << cos(angulo) << endl;

  return 0;
}