#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  system("clear||cls");

  ifstream arquivo("dados.dat");
  float soma = 0.0;
  float num = 0;
  float valor;

  if (arquivo)
  {
    while (arquivo >> valor) // será repetido enquanto for possível ter um valor
    {
      soma += valor;
      num++;
    }
    cout << "Ha no total: " << num << " numeros. Com a soma de " << soma << endl;
    cout << "A media entre eles foi de: " << soma / num << endl;
  }
  else
  {
    cout << "O arquivo nao pode ser aberto!" << endl;
  }

  return 0;
}