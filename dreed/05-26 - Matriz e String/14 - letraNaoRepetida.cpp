#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  /*
    Faça um programa que dada um string de entrada, informa qual o primeiro caractere que não se repete.

    Obs: Considere que sempre existirá pelo menos uma letra que não se repete.

    Entradas:

    Uma string.
    Saídas:

    Primeira letra que não se repete na string.
    Exemplo de Entrada:

    aabcade
    Exemplo de Saída:

    b
  */

  // leitura dos dados
  string s;

  cin >> s;

  // processamento
  int frequencia = 0;
  bool encontrou = false;

  for (long unsigned i = 0; i < s.length() and !encontrou; i++)
  {
    frequencia = 0;

    // cout << "Comparando " << s[i] << endl;
    for (long unsigned j = 0; j < s.length() and !encontrou; j++)
    {
      // cout << "Com " << s[j] << endl;
      if (s[i] == s[j])
      {
        frequencia++;
        // cout << "conta " << endl;
      }
    }

    // cout << frequencia << endl;

    // output
    if (frequencia == 1)
    {
      cout << s[i];
      encontrou = true;
    }
  }

  cout << endl;

  return 0;
}
