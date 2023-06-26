/*
De acordo com a geometria básica, podemos definir três figuras simples: um círculo, um triângulo e um retângulo. A dimensão de um círculo é basicamente representada pelo seu raio, um retângulo necessita de dois parâmetros, base e altura, e um triângulo é representado por três valores, um para cada um de seus lados. Munido dessas informações, pode-se calcular o perímetro e a área de qualquer uma dessas figuras citadas utilizando o método matemático correto.

Faça um programa que, referente a essas 3 figuras geométricas, receba as informações de 5 figuras quaisquer do usuário, sendo que cada figura será composta pelo tipo dela (adotando uma nomenclatura 'C' 'R' 'T' para identificá-las) além de, de acordo com a figura indicada, receber os parâmetros geométricos que as representam (suas dimensões). Por fim, exibir o nome, a área e o perímetro de cada uma dessas 5 figuras fornecidas pelo usuário.

Obs.: As figura devem ser identificadas por um caracter da seguinte maneira:

'C' = Círculo (parâmetro: raio)
'R' = Retângulo (parâmetros: base e altura)
'T' = Triângulo (parâmetros: 3 lados - podendo ser diferentes)
Obs.: Para o valor de PI utilize a constante M_PI disponível na biblioteca cmath.

Sugestão: O cálculo da área de um triângulo pode ser feito através do Teorema de Herão.

Entrada:
Um caracter representando o tipo da figura geométrica.
Os valores de suas dimensões (raio, lado, etc.) em ponto flutuante (double).

Saída:
Nome da figura geométrica.
Perímetro da figura.
Área da figura.

Exemplo de entrada:
C 5
C 2
T 3 4 5
R 5 10
R 2 2

Exemplo de saída:
  Circulo 31.4159 78.5398
  Circulo 12.5664 12.5664
  Triangulo 12 6
  Retangulo 30 50
  Retangulo 8 4
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Circulo
{
  double raio;
  double perimetro;
  double area;
};

struct Triangulo
{
  double lado1;
  double lado2;
  double lado3;
  double perimetro;
  double area;
};

struct Retangulo
{
  double base;
  double altura;
  double perimetro;
  double area;
};

int main()
{
  int i;
  char tipo;

  Circulo c[5];
  int contC = 0;

  Triangulo t[5];
  int contT = 0;

  Retangulo r[5];
  int contR = 0;

  for (i = 0; i < 5; i++)
  {
    cin >> tipo;
    switch (tipo)
    {
    case 'C':
    {
      cin >> c[contC].raio;
      c[contC].perimetro = 2 * M_PI * c[contC].raio;
      c[contC].area = M_PI * pow(c[contC].raio, 2);
      contC++;
      break;
    }
    case 'T':
    {
      cin >> t[contT].lado1 >> t[contT].lado2 >> t[contT].lado3;
      t[contT].perimetro = t[contT].lado1 + t[contT].lado2 + t[contT].lado3;
      double p = t[contT].perimetro / 2;
      t[contT].area = sqrt(p * (p - t[contT].lado1) * (p - t[contT].lado2) * (p - t[contT].lado3));
      contT++;
      break;
    }
    case 'R':
    {
      cin >> r[contR].base >> r[contR].altura;
      r[contR].perimetro = 2 * (r[contR].base + r[contR].altura);
      r[contR].area = r[contR].base * r[contR].altura;
      contR++;
      break;
    }

    default:
      break;
    }
  }

  for (i = 0; i < contC; i++)
  {
    cout << "Circulo " << fixed << setprecision(4) << c[i].perimetro << " " << c[i].area << endl;
  }

  for (i = 0; i < contT; i++)
  {
    cout << "Triangulo " << fixed << setprecision(4) << t[i].perimetro << " " << t[i].area << endl;
  }

  for (i = 0; i < contR; i++)
  {
    cout << "Retangulo " << fixed << setprecision(4) << r[i].perimetro << " " << r[i].area << endl;
  }

  return 0;
}
