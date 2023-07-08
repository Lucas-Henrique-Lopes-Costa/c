/*
A função de Ackermann-Péter é uma função importante em Teoria da Computação, que é definida assim:

Onde m e n são números inteiros não negativos. Cuidado, esta função requer quantidades enormes de processamento conforme seus parâmetros aumentam. Evite usar parâmetros cuja soma é maior que 7.

Faça um programa que tem uma função para calcular esta função. A função principal deve realizar as operações de leitura e escrita.

Entradas:
Dois valores inteiros não negativos que determinam respectivamente m e n na definição acima, numa mesma linha.

Saídas:
O valor da função para os parâmetros lidos.

Exemplo de Entrada:
2 4

Exemplo de Saída:
11

Aviso: Não utilize valores grandes para testar a aplicação desenvolvida, o programa pode demorar muito para efetuar os cálculos!.
*/
#include <iostream>
using namespace std;

int ackermann(int m, int n)
{
  if (m == 0)
    return n + 1;
  else if (n == 0)
    return ackermann(m - 1, 1);
  else
    return ackermann(m - 1, ackermann(m, n - 1));
  
  return 0;
}

int main()
{
  int m, n;
  cin >> m >> n;

  cout << ackermann(m, n) << endl;

  return 0;
}