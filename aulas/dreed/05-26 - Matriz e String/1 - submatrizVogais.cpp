#include <iostream>

using namespace std;

int main()
{
  /*Faça um programa que lê da entrada padrão uma matriz quadrada de caracteres, o programa deverá identificar, caso exista, uma submatriz 2x2 que contenha apenas vogais maiúsculas e deverá escrevê-la na saída padrão, caso não exista tal submatriz o programa deverá escrever "submatriz nao encontrada" (tudo minusculo e sem acento).

    Considere, para fins de eficiência, que cada matriz contém no máximo uma submatriz 2x2 de vogais.

    Entradas:

    As dimensões da matriz (número inteiro maior que 1).
    Os elementos da matriz (letras maiúsculas).
    Saídas:

    Submatriz 2x2 que contenha apenas vogais caso exista, ou então escreva apenas "submatriz nao encontrada".
    Exemplo de Entrada:

    4
    A B D C
    O P E I
    K L A I
    H Q A J
    Exemplo de Saída:

    E I
    A I
    Exemplo de Entrada:

    3
    A O P
    E Q F
    C G T
    Exemplo de Saída:

    submatriz nao encontrada*/

  int tamanho;
  cin >> tamanho;

  char matriz[tamanho][tamanho];

  // leitura da matriz
  for (int i = 0; i < tamanho; i++)
  {
    for (int j = 0; j < tamanho; j++)
    {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < tamanho - 1; i++)
  {
    for (int j = 0; j < tamanho - 1; j++)
    {
      // para cada posição da matriz, verifica se a posição e as 3 posições seguintes são vogais
      if (matriz[i][j] == 'A' ||
          matriz[i][j] == 'E' ||
          matriz[i][j] == 'I' ||
          matriz[i][j] == 'O' ||
          matriz[i][j] == 'U')
      {
        if (matriz[i][j + 1] == 'A' ||
            matriz[i][j + 1] == 'E' ||
            matriz[i][j + 1] == 'I' ||
            matriz[i][j + 1] == 'O' ||
            matriz[i][j + 1] == 'U')
        {
          if (matriz[i + 1][j] == 'A' ||
              matriz[i + 1][j] == 'E' ||
              matriz[i + 1][j] == 'I' ||
              matriz[i + 1][j] == 'O' ||
              matriz[i + 1][j] == 'U')
          {
            if (matriz[i + 1][j + 1] == 'A' ||
                matriz[i + 1][j + 1] == 'E' ||
                matriz[i + 1][j + 1] == 'I' ||
                matriz[i + 1][j + 1] == 'O' ||
                matriz[i + 1][j + 1] == 'U')
            {
              // imprime aquele trecho da matriz 2x2
              cout << matriz[i][j] << " " << matriz[i][j + 1] << endl;
              cout << matriz[i + 1][j] << " " << matriz[i + 1][j + 1] << endl;
              return 0;
            }
          }
        }
      }
    }
  }

  cout << "submatriz nao encontrada" << endl;

  return 0;
}
