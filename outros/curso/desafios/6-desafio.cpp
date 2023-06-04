#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  system("clear||cls");
  cout << fixed << setprecision(2);

  int tamanho;
  cout << "Digite quantas familias vamos analizar: ";
  cin >> tamanho;

  system("clear||cls");
  int *gasto = new int[tamanho];
  float soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    cout << "Digite da familia " << i + 1 << ": " << endl;
    cin >> gasto[i];
    soma += gasto[i];
  }

  system("clear||cls");
  float media = soma / tamanho;

  cout << "A media das " << tamanho << " familias deu " << media << endl;

  int i = 0;
  while (i < tamanho)
  {
    cout << "A familia " << i + 1 << " tem renda de: R$" << gasto[i];

    if (gasto[i] == media)
    {
      cout << ". E esta NA MEDIA" << endl;
    }
    else if (gasto[i] > media)
    {
      cout << ". E esta ACIMA da media" << endl;

      float increase = ((gasto[i] / media) - 1) * 100;

      cout << "Com " << increase << "% acima" << endl;
    }
    else
    {
      cout << ". E esta ABAIXO da media" << endl;

      float increase = ((gasto[i] / media) - 1) * 100;

      cout << "Com " << increase << "% abaixo" << endl;
    }
    cout << endl;
    i++;
  }

  return 0;
}
