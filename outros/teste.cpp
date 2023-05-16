#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  float valorIngresso;
  int diaCompra;
  char categoria;
  float valorTotal = 0;

  // Lendo o valor do ingresso do arquivo ingresso.txt
  ifstream infile("ingresso.txt");
  infile >> valorIngresso;
  infile.close();

  // Lendo as informações de cada entrada
  while (cin >> diaCompra >> categoria)
  {
    // Calculando o desconto de acordo com a data da compra
    float desconto;
    if (diaCompra >= 6 && diaCompra <= 13)
    {
      desconto = (categoria == 'E') ? 0.15 : 0.1;
    }
    else if (diaCompra >= 14 && diaCompra <= 24)
    {
      desconto = (categoria == 'E') ? 0.1 : 0.05;
    }
    else
    {
      desconto = 0;
    }

    // Calculando o valor final do ingresso com desconto
    float valorDesconto = valorIngresso * desconto;
    float valorFinal = valorIngresso - valorDesconto;

    // Somando o valor final ao valor total recebido
    valorTotal += valorFinal;
  }

  // Exibindo o valor total recebido pela venda dos ingressos
  cout << fixed << valorTotal << endl;

  return 0;
}
