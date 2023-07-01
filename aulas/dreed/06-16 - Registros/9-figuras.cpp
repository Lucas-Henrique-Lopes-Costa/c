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

struct Respostas
{
  string nome;
  double perimetro;
  double area;
};


int main()
{
  int i;
  char tipo;

  Respostas respostas[5];

  for (i = 0; i < 5; i++)
  {
    cin >> tipo;

    if (tipo == 'C')
    {
      Circulo circulo;
      cin >> circulo.raio;

      circulo.perimetro = 2 * M_PI * circulo.raio;
      circulo.area = M_PI * pow(circulo.raio, 2);

      respostas[i].nome = "Circulo";
      respostas[i].perimetro = circulo.perimetro;
      respostas[i].area = circulo.area;
    }
    else if (tipo == 'T')
    {
      Triangulo triangulo;
      cin >> triangulo.lado1 >> triangulo.lado2 >> triangulo.lado3;

      triangulo.perimetro = triangulo.lado1 + triangulo.lado2 + triangulo.lado3;
      triangulo.area = sqrt(triangulo.perimetro / 2 * (triangulo.perimetro / 2 - triangulo.lado1) * (triangulo.perimetro / 2 - triangulo.lado2) * (triangulo.perimetro / 2 - triangulo.lado3));

      respostas[i].nome = "Triangulo";
      respostas[i].perimetro = triangulo.perimetro;
      respostas[i].area = triangulo.area;
    }
    else if (tipo == 'R')
    {
      Retangulo retangulo;
      cin >> retangulo.base >> retangulo.altura;

      retangulo.perimetro = 2 * (retangulo.base + retangulo.altura);
      retangulo.area = retangulo.base * retangulo.altura;

      respostas[i].nome = "Retangulo";
      respostas[i].perimetro = retangulo.perimetro;
      respostas[i].area = retangulo.area;
    }
  }

  for (i = 0; i < 5; i++)
  {
    cout << respostas[i].nome << " " << respostas[i].perimetro << " " << respostas[i].area << endl;
  }

  return 0;
}
