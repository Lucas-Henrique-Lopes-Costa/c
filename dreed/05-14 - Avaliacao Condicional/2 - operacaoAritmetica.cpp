#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  /*
    Faça um programa que receba como entrada dois números em ponto flutuante, representando os operandos A e B de uma expressão aritmética a ser definida. Após receber os valores de A e B, seu programa deverá receber um número inteiro X compreendido no intervalo [1,4] que indicará uma determinada operação aritmética a ser computada. Os dados de entrada serão fornecidos em linhas diferentes. Seu programa deverá calcular a operação aritmética indicada por X e exibir no dispositivo de saída padrão o resultado da mesma. As operações aritméticas definidas por X são indicadas na relação a seguir:

    Obs. Python: para soluções em Python, assuma que números em ponto flutuante com precisão dupla são os números em ponto flutuante tradicionais, ou seja, números em float.

    Obs. C/C++: para soluções em C ou C++, assuma que números em ponto flutuante com precisão dupla são obtidos utilizando double.

    Escolha do Usuário (X)	Operação
    1	Média entre os números digitados
    2	Subtrair o menor número do maior
    3	Produto entre os números digitados
    4	Divisão do primeiro pelo segundo
    Se a opção digitada for inválida, seu programa deverá exibir a mensagem ERRO e terminar a execução do programa. Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. Nesta situação, caso o segundo número seja igual a zero, a mensagem ERRO também deve ser exibida.

    Entradas:

    Dois números em ponto flutuante com precisão dupla A e B.
    Número inteiro X que indica a operação aritmética a ser computada.
    Saídas:

    Número em ponto flutuante com precisão dupla que denota o resultado da expressão aritmética; ou a mensagem ERRO, caso o usuário insira um valor inválido de operação .
    Exemplo de entrada:

    9.5
    7.0
    5
    Exemplo de saída:

    ERRO
    Exemplo de entrada:

    9.5
    7.0
    2
    Exemplo de saída:

    2.5
  */

  float A, B;
  cin >> A >> B;

  int X;
  cin >> X;

  if (X == 1)
  {
    cout << (A + B) / 2.0 << endl;
  }
  else if (X == 2)
  {
    if (A > B)
    {
      cout << A - B << endl;
    }
    else
    {
      cout << B - A << endl;
    }
  }
  else if (X == 3)
  {
    cout << A * B << endl;
  }
  else if (X == 4)
  {
    if (B == 0)
    {
      cout << "ERRO" << endl;
    }
    else
    {
      cout << A / B << endl;
    }
  }
  else
  {
    cout << "ERRO" << endl;
  }

  return 0;
}