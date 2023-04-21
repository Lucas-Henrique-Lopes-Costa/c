#include <iostream>
#include <locale.h>

using namespace std;

// int t;

#define pi 3.14;
#define final cout << "Final\n";

void inscrever()
{
  cout << "Primeira Funcao!!\n";
}

int somar(int &x, int &y)
{
  int soma;
  soma = x + y;
  x = 30;
  return soma;
}

int main()
{
  setlocale(LC_ALL, "portuguese");

  int t;
  t = 0;

  inscrever();

  int a = 5, b = 4;
  int s;

  s = somar(a, b);
  cout << "Valor de A: " << a << endl;
  cout << "Soma: " << s << endl;

  cout << "Valor de t: " << t << endl;

  final;

  return 0;
}
