#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  int n = 3;
  cout << "Diga um numero nao negativo: ";
  // cin >> n;

  int soma = 0;
  int count = 1;

  // analisa a condição primeiro para depois fazer
  while (count <= n)
  {
    soma += count;
    count++;
  }

  // ele executa primeiro, depois vê a condição
  do
  {
    soma += count;
    count++;
  } while (count <= n);

  // contador
  for (int j = 1; j < count; j++)
  {
    soma += j;
  }

  cout << "A soma dos numeros ate " << n << " = " << soma << endl;

  return 0;
}