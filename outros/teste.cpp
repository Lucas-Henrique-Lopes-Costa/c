#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  ofstream saida("jogo.txt");

  int Tamanho;
  cin >> Tamanho;
  int contAux;
  contAux = Tamanho;

  while (contAux > 0)
  {
    // Escreve A linha Impar
    if (contAux % 2 != 0)
    {
      for (int i = 0; i < Tamanho; i++)

      {
        if (i % 2 == 0)
        {
          saida << ".";
        }
        else
        {
          saida << "#";
        }
      }

      saida << endl;
    }

    // Escreve a Linha par
    if (contAux % 2 == 0)
    {
      for (int i = 0; i < Tamanho; i++)
      {
        if (i % 2 == 0)
        {
          saida << "#";
        }
        else
        {
          saida << ".";
        }
      }
      saida << endl;
    }

    contAux--;
  }

  return 0;
}