#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  int codigoProduto, codigoPais;
  float pesoProduto, pesoProdutoGramas, precoBruto, imposto, precoTotal;

  cin >> codigoProduto;
  cin >> pesoProduto;

  pesoProdutoGramas = pesoProduto * 1000;

  if (codigoProduto >= 1 and codigoProduto <= 4)
  {
    precoBruto = pesoProdutoGramas * 10;
  }
  else if (codigoProduto >= 5 and codigoProduto <= 7)
  {
    precoBruto = pesoProdutoGramas * 25;
  }
  else if (codigoProduto >= 8 and codigoProduto <= 10)
  {
    precoBruto = pesoProdutoGramas * 35;
  }

  cin >> codigoPais;

  if (codigoPais == 1)
  {
    imposto = 0;
  }
  else if (codigoPais == 2)
  {
    imposto = precoBruto * 0.15;
  }
  else if (codigoPais == 3)
  {
    imposto = precoBruto * 0.25;
  }

  precoTotal = precoBruto + imposto;

  cout << fixed << setprecision(1) << pesoProdutoGramas << endl;
  cout << fixed << setprecision(1) << precoBruto << endl;
  cout << fixed << setprecision(1) << imposto << endl;
  cout << fixed << setprecision(1) << precoTotal << endl;

  return 0;
}