// Substituir cada letra da palavra pela sua antecessora no alfabeto
//  abacaxi -> bcbdbyj
//  OBS: a letra 'z' deve ser substituída pela letra 'a'
#include <iostream>
using namespace std;

int main()
{
  char palavra[12]; // palavras com no máximo 12 caracteres
  cin >> palavra;   // lendo uma entrada e armazenando-a no vetor

  int indicePalavra = 0;

  while (indicePalavra < 12 and palavra[indicePalavra] != '\0')
  {
    if (palavra[indicePalavra] == 'z')
      palavra[indicePalavra] = 'a';
    else
      palavra[indicePalavra] = palavra[indicePalavra] + 1;
    indicePalavra++;
  }
  cout << palavra << endl;

  return 0;
}