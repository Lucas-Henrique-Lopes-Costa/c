/*
A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.

Sabendo-se que a sequência de Fibonacci é definida por:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da referida série.

Entrada:
Os valores iniciais da série de Ricci ( F(0) e F(1) );
Os número de termos dessa sequência a serem impressos.

Saída:
Os n termos dessa sequência.

Exemplo de entrada:
5 8
6

Exemplo de saída:
5 8 13 21 34 55
*/

#include <iostream>
using namespace std;

void imprimeRicci(int n1, int n2, int termos)
{
  if (termos == 0)
    return;

  cout << n1 << " ";

  imprimeRicci(n2, n1 + n2, termos - 1);
}

int main()
{
  int n1, n2;
  cin >> n1 >> n2;

  int termos;
  cin >> termos;

  // int i = 0;
  // while (i < termos)
  // {
  //   // Imprime o termo atual
  //   cout << n1 << " ";

  //   // Calcula o próximo termo
  //   int aux = n1; // Guarda o valor de n1 = 5 = F(0)
  //   n1 = n2; // n1 = 8 = F(1) -> ele passa a ser o próximo termo
  //   n2 = aux + n2; // n2 = 5 + 8 = 13 = F(2) -> ele passa a ser o próximo termo
    
  //   i++;
  // }
  // é um fibonacci só que os dois primeiros termos são definidos pelo usuário

  imprimeRicci(n1, n2, termos);

  cout << endl;

  return 0;
}