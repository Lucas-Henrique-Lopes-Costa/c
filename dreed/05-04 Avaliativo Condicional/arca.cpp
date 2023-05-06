#include <iostream>
using namespace std;

int main()
{
  int limiteCarga, cavalo, vaca, galinha;
  int quantidadeCavlo = 0, quantidadeVaca = 0, quantidadeGalinha = 0;

  cin >> limiteCarga >> cavalo >> vaca >> galinha;

  while (limiteCarga > 2 and quantidadeGalinha < galinha)
  {
    limiteCarga -= 2;
    quantidadeGalinha++;
  }

  while (limiteCarga >= 150 and quantidadeVaca < vaca)
  {
    limiteCarga -= 150;
    quantidadeVaca++;
  }

  while (limiteCarga >= 250 and quantidadeCavlo < cavalo)
  {
    limiteCarga -= 250;
    quantidadeCavlo++;
  }

  cout << cavalo - quantidadeCavlo << endl;
  cout << vaca - quantidadeVaca << endl;
  cout << galinha - quantidadeGalinha << endl;

  return 0;
}