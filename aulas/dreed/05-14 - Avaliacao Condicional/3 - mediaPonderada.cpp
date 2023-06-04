#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:

    Nota	Peso
    Trabalho de Laboratório	2
    Avaliação Semestral	3
    Exame Final	5
    Faça um programa que receba as três notas do dispositivo de entrada padrão, calcule e mostre a média ponderada das notas obtidas pelo aluno. Seu programa deverá informar também o conceito obtido pelo aluno na disciplina, segundo a relação a seguir:

    Média Ponderada	Conceito
    [8.0,10.0]	A
    [7.0,8.0[	B
    [6.0,7.0[	C
    [5.0,6.0[	D
    [0.0,5.0[	E

    Entradas:

    Três números em ponto flutuante que denotam as três notas obtidas pelo aluno. As notas são fornecidas de acordo com a seguinte ordem: nota do trabalho de laboratório, nota da avaliação semestral e, por último, nota do exame final. Cada dado de entrada será fornecido em uma linha diferente.

    Saídas:

    Número em ponto flutuante que indica a média ponderada das notas passadas como entrada.
    Caractere que indica o conceito obtido pelo aluno na disciplina.

    Exemplo de entrada:

    7.5
    5.0
    6.1

    Exemplo de saída:

    6.05
    C

    Exemplo de Entrada:

    8.0
    6.5
    8.9

    Exemplo de Saída:

    8.0
    A
  */

  float A, B, C;
  cin >> A >> B >> C;

  float media = (A * 2 + B * 3 + C * 5) / 10.0;

  cout << media << endl;

  if (media >= 8.0 and media <= 10.0)
  {
    cout << "A" << endl;
  }
  else if (media >= 7.0 and media < 8.0)
  {
    cout << "B" << endl;
  }
  else if (media >= 6.0 and media < 7.0)
  {
    cout << "C" << endl;
  }
  else if (media >= 5.0 and media < 6.0)
  {
    cout << "D" << endl;
  }
  else if (media >= 0.0 and media < 5.0)
  {
    cout << "E" << endl;
  }

  return 0;
}