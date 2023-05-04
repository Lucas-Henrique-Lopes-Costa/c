#include <iostream>

using namespace std;

int main()
{

  string escolha;
  int quantidadeDias;
  double kmRodado;

  cin >> escolha >> quantidadeDias >> kmRodado;

  if (escolha == "ECONOMICO")
  {
    double custoAluguel = (88 * quantidadeDias) + (1.15 * kmRodado);

    cout << fixed << setprecision(2) << "R$ " << custoAluguel << endl;

    cout << "Carros a disposicao: " << "Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0";
  }
  else if (escolha == "INTERMEDIARIO")
  {
    double custoAluguel = (197 * quantidadeDias) + (1.56 * kmRodado);

    cout << fixed << setprecision(2) << "R$ " << custoAluguel << endl;

    cout << "Carros a disposicao: " << "HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST";
  }
  else if (escolha == "PRIME")
  {
    double custoAluguel = (265 * quantidadeDias) + (2.89 * kmRodado);

    cout << fixed << setprecision(2) << "R$ " << custoAluguel << endl;

    cout << "Carros a disposicao: " << "Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo";
  }
  else
  {

    double custoAluguel = (335 * quantidadeDias) + (3.40 * kmRodado);

    cout << fixed << setprecision(2) << "R$ " << custoAluguel << endl;

    cout << "Carros a disposicao: " << "Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross";
  }

  return 0;
}