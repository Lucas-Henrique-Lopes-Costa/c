#include <iostream>

using namespace std;

int main()
{
  float nota;
  float maior = 0;
  int quantidade = 0;

  do
  {
    cin >> nota;
    quantidade++;

    if (nota > maior)
    {
      maior = nota;
    }
  } while (nota >= 0);

  cout << "Quantidade de candidatos: " << quantidade - 1 << endl;
  cout << "Maior nota: " << maior << endl;

  return 0;
}