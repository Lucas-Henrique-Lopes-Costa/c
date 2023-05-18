#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  string nome_arquivo_entrada, nome_arquivo_saida;
  int numero, menor1, menor2, soma = 0, divisores = 0;
  bool primo = false;

  cin >> nome_arquivo_entrada;

  ifstream arq1(nome_arquivo_entrada);

  arq1 >> menor1;
  menor2 = menor1 + 1;
  soma += menor1 + menor2;

  

  while (arq1 >> numero and !primo)
  {

    if (numero < menor1)
    {
      menor2 = menor1;
      menor1 = numero;
    }

    else if (numero < menor2)
      menor2 = numero;

    soma += numero;

    divisores = 0;
    
    for (int i = 2; i < numero; i++)
    {
      if (numero % i == 0)
      {
        divisores++;
      }
    }

    if (divisores == 0)
    {
      primo = true;
      arq1 >> nome_arquivo_saida;
    }

  }

  ofstream arq2(nome_arquivo_saida);
  
  arq2 << menor1 << " " << menor2 << " " << soma - menor1 - menor2;

  return 0;
}