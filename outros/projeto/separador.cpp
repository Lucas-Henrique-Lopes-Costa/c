#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream arquivo("dados.txt");

  int ArquivoAtual = 0;
  int Repeticoes50 = 0;
  int numero;

  /* Crie um programa que le um arquivo com um número desconhecido de números de telefone, e depois separem em arquivos com 50 numeros cada*/

  for (int i = 1; i < 120; i+=50)
  {
    if (Repeticoes50 == 50)
    {
      Repeticoes50 = 0;
      ArquivoAtual++;
    }

    string name = "arquivo" + to_string(ArquivoAtual) + ".csv";
    
    ofstream saida(name);

    for (int j = 0; j < 50; j++)
    {
      arquivo >> numero;
      saida << numero << endl;
      
      Repeticoes50++;
    }

  }

  return 0;
}