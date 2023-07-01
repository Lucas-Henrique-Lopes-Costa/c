/*
Desenvolva um programa que receba uma matriz nxn (n fornecido pelo usuário) de caracteres (um caractere em cada posição da matriz). O usuário digitará m palavras (m informado na entrada). O programa deve procurar a ocorrência de cada palavra na matriz, imprimindo as coordenadas da primeira letra ou -1 -1 se a palavra não existir. A procura deve ser feita na horizontal (da esquerda para direita) e na vertical (de cima para baixo).

OBS: Letras maiúsculas e minúsculas são diferenciadas. A matriz deve ser alocada dinamicamente. A função strlen() retorna o tamanho de uma string tipo C (vetor de caracteres) e o método length() ou size() pode ser usado para pegar o tamanho de uma string do C++.

Entradas:
Tamanho do lado da matriz (n)
Matriz de caracteres (nxn)
Número de palavras (m)
Palavras sem espaços, uma em cada linha

Saídas:
Posição da letra inicial de cada palavra na matriz, na ordem em que as palavras foram lidas.

Exemplo de Entrada:
3
A B C
D E F
G H I
2
BE
FI

Exemplo de Saída:
0 1
1 2
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char **matriz = new char *[n];

  for (int i = 0; i < n; i++)
  {
    // declarando a linha da matriz
    matriz[i] = new char[n];

    // lendo a linha da matriz
    for (int j = 0; j < n; j++)
    {
      cin >> matriz[i][j];
    }
  }

  int m;

  cin >> m;
  string *palavras = new string[m];

  // Lendo as palavras
  for (int i = 0; i < m; i++)
  {
    cin >> palavras[i];
  }

  // Procurando as palavras
  for (int i = 0; i < m; i++)
  {
    // Procurando a palavra palavras[i]
    string palavra = palavras[i];

    // Tamanho da palavra
    int tam = palavra.length();
    bool encontrou = false;
    
    // Procurando na horizontal
    for (int j = 0; j < n && !encontrou; j++)
    {
      // Procurando na linha j
      for (int k = 0; k < n && !encontrou; k++)
      {
        // Procurando a primeira letra da palavra na posição j, k
        if (matriz[j][k] == palavra[0])
        {
          // Encontrada, agora verificar se a palavra está na horizontal
          if (k + tam <= n)
          {
            // declara uma string auxiliar para armazenar a palavra
            string aux = "";
            for (int l = 0; l < tam; l++)
            {
              // adiciona a letra na string auxiliar
              aux += matriz[j][k + l];
            }
            // Verifica se a palavra é igual a aux
            if (aux == palavra)
            {
              cout << j << " " << k << endl;
              encontrou = true;
            }
          }
          // Verificar se a palavra está na vertical
          if (j + tam <= n)
          {
            string aux = "";
            for (int l = 0; l < tam; l++)
            {
              aux += matriz[j + l][k];
            }
            if (aux == palavra)
            {
              cout << j << " " << k << endl;
              encontrou = true;
            }
          }
        }
      }
    }
    if (!encontrou)
    {
      cout << "-1 -1" << endl;
    }
  }

  return 0;
}
