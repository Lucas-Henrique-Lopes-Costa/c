#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  // definindo precisão do código
  cout.precision(10);
  cout.setf(ios::fixed);

  int a = 5, b = 2;

  // int soma = a + b;
  // cout << soma << endl;
  cout << "Soma: " << a + b << endl;

  int sub = a - b;
  cout << "Subtracao: " << sub << endl;

  int mult = a * b;
  cout << "Multiplicacao: " << mult << endl;

  // divisões

  int quocdiv = a / b;
  cout << "Quociente: " << quocdiv << endl;

  int restodiv = a % b;
  cout << "Resto: " << restodiv << endl;

  float div = (float)a / (float)b;
  cout << "Divisao: " << div << endl;

  // outras operações
  int pot = pow(a, b);
  cout << "Potencia: " << pot << endl;

  cout << "a antigo: " << a << endl;
  a += 2;
  a++;
  a -= 2;
  a--;
  a *= 2;
  a /= 2;
  cout << "a novo: " << a << endl;
}