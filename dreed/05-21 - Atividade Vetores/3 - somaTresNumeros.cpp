#include <iostream>
using namespace std;

int main()
{
  /*
    Faça um programa que leia um vetor de inteiros e seu tamanho T, onde T ≥ 3. O programa deverá ainda ler um terceiro número inteiro N e verificar se existe dentro do vetor três números cujas somas sejam iguais a N. Você foi informado que caso exista mais de uma alternativa, para dar preferência àquela que use valores iniciais do vetor (e imprimir apenas essa).

    Obs: Caso não existam três números que satisfaçam a soma, deverá ser impresso apenas -1.

    Entradas:

    Número inteiro indicando o tamanho do vetor.
    Elementos do vetor.
    Número inteiro N.
    Saídas:

    Os três números utilizados ou -1 caso a soma não seja possível.
    Exemplo de Entrada:

    5
    1 2 3 4 5
    12
    Exemplo de Saída:

    3 4 5
  */

  int T;
  cin >> T;
  int v[T];

  for (int i = 0; i < T; i++)
  {
    cin >> v[i];
  }

  int N;
  cin >> N;

  bool encontrou = false;

  for (int i = 0; i < T && !encontrou; i++)
  {
    for (int j = i + 1; j < T && !encontrou; j++)
    {
      for (int k = i + 2; k < T && !encontrou; k++)
      {
        if (v[i] + v[j] + v[k] == N && i != j && i != k && j != k)
        {
          cout << v[i] << " " << v[j] << " " << v[k] << endl;
          encontrou = true;
        }
      }
    }
  }

  if (!encontrou)
  {
    cout << -1 << endl;
  }

  return 0;
}