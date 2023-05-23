#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que receba um valor inteiro N e N valores reais que serão armazenados em um vetor V. Em seguida, o programa receberá um valor inteiro M (M <= N) e uma sequência de M números inteiros, que correspondem aos índices do vetor V (ou seja, os valores da sequência variam entre 0 e N-1). O programa deverá multiplicar por 2 os valores do vetor V correspondentes aos índices lidos na sequência.

    Por exemplo: se um vetor V de 5 valores tiver os números 10.0, 20.0, 30.0, 40.0 e 50.0 e se a sequência lida tiver 3 números: 0 4 3, os valores alterados no vetor V serão: V[0]*2, V[4]*2, V[3]*2. O vetor V resultante será 20.0, 20.0, 30.0, 80.0, 100.0.

    Entrada:

    Valor inteiro N;
    N números reais a serem colocados em um vetor;
    Valor inteiro M (M<=N);
    Sequência de M números inteiros (valores entre 0 e N-1).
    Saída:

    Vetor V com os valores alterados.
    Exemplo de entrada:

    7
    2 4 3 2 5 7 8
    4
    0 1 2 5
    Exemplo de saída:

    4 8 6 2 5 14 8
  */

  // lendo o tamanho do vetor
  int n;
  cin >> n;

  // criando o vetor
  int vetorN[n];
  for (int i = 0; i < n; i++)
  {
    cin >> vetorN[i];
  }

  // lendo o tamanho da sequência que deve ser menor que M
  int m;
  cin >> m;

  // criando a sequência
  int vetorM[m];
  for (int i = 0; i < m; i++)
  {
    cin >> vetorM[i];
  }

  // alterando os valores do vetor
  for (int i = 0; i < m; i++)
  {
    vetorN[vetorM[i]] *= 2;
  }

  // exibindo o vetor
  for (int i = 0; i < n; i++)
  {
    cout << vetorN[i] << " ";
  }

  return 0;
}