#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Faça um programa que abra um arquivo, cujo nome é fornecido pelo usuário, que contenha apenas números inteiros positivos. O programa deverá contar a quantidade de números no arquivo que são o dobro do número anterior e guardar o resultado em um arquivo chamado “dobro.txt”.

    Exemplo de Entrada (entrada padrão):

    entrada.txt
    Exemplo de Entrada (arquivo entrada.txt):

    10 4 3 6 12 8 16
    Exemplo de Saída (arquivo dobro.txt):

    3
    Exemplo de Entrada (entrada padrão):

    valores.txt
    Exemplo de Entrada (arquivo valores.txt):

    1 2 4 8 16 8 4 2 1 3 6 9
    Exemplo de Saída (arquivo dobro.txt):

    5
  */
  
  string entrada;
  cin >> entrada;

  ifstream arquivoIn(entrada);
  ofstream arquivoOut("dobro.txt");

  int n1, n2, soma = 0;

  arquivoIn >> n1;

  while (arquivoIn >> n2)
  {
    if (n2 == n1 * 2)
    {
      soma++;
    }
    
    n1 = n2;
  }
  
  arquivoOut << soma << endl;
  
  return 0;
}
