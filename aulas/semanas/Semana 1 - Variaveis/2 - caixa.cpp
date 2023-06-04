#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  system("clear||cls");

  int serieProduto, serieCaixa;

  cout << "Qual e a serie? ";
  cin >> serieProduto;

  serieCaixa = ceil((float)serieProduto / 6);

  cout << "A serie e: " << serieCaixa << endl;

  return 0;
}