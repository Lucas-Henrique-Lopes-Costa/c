#include <iostream>
using namespace std;

int main()
{
  /*
    Escreva um algoritmo que leia um vetor de 10 posições do tipo caractere, que representa o gabarito de uma prova. Em seguida leia 2 vetores que representam as provas de 2 alunos. Escreva a quantidade de questões que o aluno acertou e se o aluno acertar 6 ou mais questões, escreva "APROVADO", e "REPROVADO" se o aluno acertou menos que 6 questões.

    Obs.: Considere que não existirão vetores vazios

    Entradas:

    vetor[10] (char)
    O vetor prova de cada um dos 2 alunos
    Saídas:

    Número (int)de acertos de cada aluno
    "APROVADO" se o número de acertos for maior ou igual a 6
    ou "REPROVADO" se o número de acertos for menor que 6
    Exemplo de Entrada:

    E C A D C A D C C B
    A B A D E A E C C B
    D C C E C A D C D A
    Exemplo de Saída:

    6
    APROVADO
    5
    REPROVADO
  */

  char gabarito[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> gabarito[i];
  }

  char prova1[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> prova1[i];
  }

  char prova2[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> prova2[i];
  }

  int acertos1 = 0;

  for (int i = 0; i < 10; i++)
  {
    if (prova1[i] == gabarito[i])
    {
      acertos1++;
    }
  }

  cout << acertos1 << endl;

  if (acertos1 >= 6)
  {
    cout << "APROVADO" << endl;
  }
  else
  {
    cout << "REPROVADO" << endl;
  }

  int acertos2 = 0;

  for (int i = 0; i < 10; i++)
  {
    if (prova2[i] == gabarito[i])
    {
      acertos2++;
    }
  }

  cout << acertos2 << endl;

  if (acertos2 >= 6)
  {
    cout << "APROVADO" << endl;
  }
  else
  {
    cout << "REPROVADO" << endl;
  }

  return 0;
}