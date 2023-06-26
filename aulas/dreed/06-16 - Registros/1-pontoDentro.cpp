/*
Considerando a utilização de um registro, com coordenadas X e Y, para representar um ponto P no plano cartesiano, implemente um programa que, dado um conjunto N de retângulos, indique a quantidade dos mesmos nos quais o ponto P se encontra dentro de suas áreas. Defina um retângulo como um registro de dois campos do tipo Ponto, representando o vértice inferior esquerdo V1 e o vértice superior direito V2. Obs: considere que os retângulos são paralelos aos eixos cartesianos.

Entradas:
    Dois inteiros representando as coordenadas (x,y) do ponto P no plano cartesiano.
    Um número inteiro representando a quantidade de retângulos a serem analisados.
    Sequência de valores inteiros representando as coordenadas dos vértices V1 e V2 de cada retângulo a ser analisado. Note que serão lidos 4 números inteiros para cada retângulo do problema, de modo que os dois primeiros números se referem as coordenadas (x,y) de V1 e os dois números seguintes as coordenadas (x,y) de V2.

Saídas:
    Número inteiro que indica a quantidade de retângulos cujo ponto P se encontra dentro das áreas dos respectivos retângulos.

Exemplo de entrada:
2 3
4
1 1 3 3
2 1 5 5
0 0 2 2
3 5 7 8

Exemplo de saída:
2
*/
#include <iostream>
using namespace std;

struct P
{
  int X;
  int Y;
};

struct R
{
  P V1; // acessa o campo X do registro P
  P V2; // acessa o campo Y do registro P
};

int main()
{
  int x, y, n, cont = 0;
  cin >> x >> y >> n;

  P ponto;
  ponto.X = x;
  ponto.Y = y;

  R retangulo[n];

  for (int i = 0; i < n; i++)
  {
    cin >> retangulo[i].V1.X >> retangulo[i].V1.Y >> retangulo[i].V2.X >> retangulo[i].V2.Y;
  }
  
  for (int i = 0; i < n; i++)
  {
    if (ponto.X >= retangulo[i].V1.X and ponto.X <= retangulo[i].V2.X and ponto.Y >= retangulo[i].V1.Y and ponto.Y <= retangulo[i].V2.Y)
    {
      cont++;
    }
  }

  cout << cont << endl;

  return 0;
}