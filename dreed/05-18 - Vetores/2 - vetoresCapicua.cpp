#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  /*
    Um número inteiro não negativo é dito ser capicua quando lido da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. O ano 2002, por exemplo, é capicua. Implemente um programa que receba a quantidade de dígitos que serão inseridos e armazene-os em um vetor alocado dinamicamente. O programa deverá responder se os dígitos lidos compõem um número capicua ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.

    Entrada do programa:

    Quantidade de dígitos a serem inseridos
    Sequência de dígitos a serem armazenados (mesma linha).
    Saída do programa:

    Posições e valores comparados enquanto as comparações forem verdadeiras. Uma palavra ("sim" ou "nao" - em minúsculas, sem acentos) que indica se o número é capicua.
    Exemplo de entrada do programa:

    6
    1 2 3 3 2 1
    Exemplo de saída do programa:

    0 1 5 1 1 2 4 2 2 3 3 3
    sim
    Exemplo de entrada do programa:

    11
    1 2 3 4 5 5 4 3 2 1 0
    Exemplo de saída do programa:

    nao
    Exemplo de entrada do programa:

    11
    1 2 3 4 5 5 0 4 3 2 1
    Exemplo de saída do programa:

    0 1 10 1 1 2 9 2 2 3 8 3 3 4 7 4
    nao
  */

  // pegando os dados para o vetor
  int n;
  cin >> n;

  int vetor[n];

  // pegando só valores positivos
  int i = 0;
  while (i < n)
  {
    cin >> vetor[i];

    if (vetor[i] < 0)
    {
    cin >> vetor[i];
    }
    i++;
  }

  // verificando se é capicua
  bool capicua = true;
  int cont = 0;

  for (int i = 0; i < n / 2 and capicua; i++)
  {
    // se forem diferentes, não é capicua
    if (vetor[i] != vetor[n - i - 1])
    {
      capicua = false;
    }
    else
    {
      // comparando as posições simétricas
      cout << i << " " << vetor[i] << " " << n - i - 1 << " " << vetor[n - i - 1] << " ";
      cont++;
    }
  }

  // imprimindo o resultado
  if (capicua)
  {
    // imprimindo o valor caso seja apenas 1
    if (n == 1 or n == 0)
    {
      cout << "0 " << vetor[0] << " 0 " << vetor[0] << " ";
    }

    cout << endl;
    cout << "sim" << endl;
  }
  else
  {
    if (cont > 0)
    {
      cout << endl;
    }

    cout << "nao" << endl;
  }

  return 0;
}