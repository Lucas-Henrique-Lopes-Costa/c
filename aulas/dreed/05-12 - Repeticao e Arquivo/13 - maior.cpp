#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ifstream entrada("entrada.txt");

  int maior = 0;
  int menor = 0;
  int soma = 0;
  int contador = 0;

  // Ler valores do arquivo e calcular maior, menor e soma
  int valor;
  if (entrada)
  {
    while (entrada >> valor)
    {
      if (contador == 0)
      {
        menor = valor;
        maior = valor;
      }
      else if (valor < menor)
      {
        menor = valor;
      }
      else if (valor > maior)
      {
        maior = valor;
      }

      soma += valor;
      contador++;
    }

    // Calcular média e exibir resultados
    double media = (double)soma / contador;
    cout << maior << endl;
    cout << menor << endl;
    cout << fixed << setprecision(1) << media << endl;
  }
  else
  {
    cout << "Erro ao abrir arquivo" << endl;
  }

  return 0;
}
