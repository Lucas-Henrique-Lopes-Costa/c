#include <iostream>

using namespace std;

int main()
{
  float numero, maior, segundo, media = 0;
  cin >> numero;

  maior = numero;
  media += numero;

  int index = 0;

  cin >> numero;
  if (numero > maior)
  {
    segundo = maior;
    maior = numero;
  }
  else
  {
    segundo = numero;
  }

  media = media + numero;

  while (index < 5)
  {
    cin >> numero;
    if (numero > maior)
    {
      segundo = maior;
      maior = numero;
    }
    else if (numero > segundo)
    {
      segundo = numero;
    }

    media += numero;
    index++;
  }

  media = media - (maior + segundo);
  cout << "Maior Número: " << maior << endl
       << "Segundo Maior Número: " << segundo << endl
       << "Média: " << media << endl;

  return 0;
}
