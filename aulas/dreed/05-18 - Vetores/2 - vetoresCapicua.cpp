#include <iostream>

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

  /*
    1 passo
    Verificação se um número é capicua
    Dado uma sequência de dígitos, a verificação se é um capicua é relativamente simples. Acessamos a posição inicial e final do vetor e vamos comparando. Para isso, usamos um iterador iniciado em zero

    2 passo
    Percebam que não precisamos testar o elemento central se a quantidade de elementos for ímpar. Além disso, percebam que 7/2 = 3, considerando divisão inteira. Então tanto para vetor com tamanho par ou ímpar, basta avançar o i até que ele seja menor que a metade. Entretanto, devemos parar quando já verificamos que não é capicua... Precisamos usar while. E também um sentinela, para informar quando parar (já verificou que não é capicua).
  */

  int tamanho;
  char digitos[20];
  cin >> tamanho;

  for (int i = 0; i < tamanho; i++)
  {
    cin >> digitos[i];
  }

  bool capicua = true;
  int posicao = 0;

  while ((posicao < (tamanho / 2)) and capicua)
  {
    if (digitos[posicao] != digitos[tamanho - posicao - 1])
    {
      capicua = false;
    }
    else
    {
      cout << posicao << " " << digitos[posicao] << " " << tamanho - posicao - 1 << " " << digitos[tamanho - posicao - 1] << " ";
    }
    posicao++;
  }

  cout << endl;

  if (capicua)
  {
    cout << "sim" << endl;
  }
  else
  {
    cout << "nao" << endl;
  }

  return 0;
}