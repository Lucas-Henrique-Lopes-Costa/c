#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  /*
    Desenvolva um programa que receba do dispositivo de entrada padrão um vetor de números reais e um número inteiro N. Seu programa deverá exibir no dispositivo de saída padrão o somatório dos N primeiros números do vetor de entrada. Assuma que o valor de N sempre será menor ou igual a quantidade total de elementos presentes no vetor.

    Entradas:

    O tamanho do vetor
    Um vetor de números reais. Os elementos do vetor serão fornecidos em uma única linha, separados por espaço.
    Um número inteiro N.
    Saídas:

    Um número real que representa o somatório dos N primeiros números do vetor de entrada. A saída deve ser apresentada com duas casas decimais.
    Exemplo de Entrada:

    8
    2.6 16.1 20.02 4.2 6.3 -4.1 0 37.2
    3
    Exemplo de Saída:

    38.72
    Exemplo de Entrada:

    8
    -6.3 -4.1 0 37.2 -2.6 -16.1 -20.02 -4.2
    8
    Exemplo de Saída:

    -16.12
    Exemplo de Entrada:

    3
    9.7 5.0 7.66
    1
    Exemplo de Saída:

    9.70
  */

  // lendo o tamanho do vetor
  int tamanho;
  cin >> tamanho;

  // lendo os elementos do vetor
  float vetor[tamanho];
  for (int i = 0; i < tamanho; i++)
  {
    cin >> vetor[i];
  }

  // lendo o valor de N
  int n;
  cin >> n;

  // somando os N primeiros elementos do vetor
  float soma = 0;
  for (int i = 0; i < n; i++)
  {
    soma += vetor[i];
  }

  // exibindo o resultado
  cout << fixed << setprecision(2) << soma << endl;

  return 0;
}
