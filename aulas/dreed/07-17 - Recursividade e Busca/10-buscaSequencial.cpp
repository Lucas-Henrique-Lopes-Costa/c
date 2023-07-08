/*
Frequentemente é necessário realizar consultas em um vetor para buscar um determinado elemento. Dado um vetor com elementos do tipo caractere, elaborar um algoritmo para realizar essa busca. Mostrar todas as posições do vetor onde o elemento foi encontrado. Caso o elemento não seja encontrado, imprimir -1.

Entradas:
O número de caracteres que devem ser lidos.
Os caracteres separados por brancos.
Um caracter para ser buscado.

Saídas:
Os índices de cada elemento do vetor que for igual ao caracter buscado.

Exemplo de entrada:
5
A R A R A
A

Exemplo de saída:
0 2 4
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  char palavras[n];

  for (int i = 0; i < n; i++)
  {
    cin >> palavras[i];
  }

  char palavra;
  cin >> palavra;
  bool encontrou = false;
  for (int i = 0; i < n; i++)
  {
    if (palavra == palavras[i])
    {
      cout << i << " ";
      encontrou = true;
    }
  }

  if (!encontrou)
  {
    cout << "-1";
  }

  cout << endl;

  return 0;
}