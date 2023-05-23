#include <iostream>

using namespace std;

int main()
{
  int total, matricula, alunos = 0;
  cin >> total;
  alunos = total;

  int vetor[total];

  for (int i = 0; i < total; i++)
  {
    cin >> matricula;
    vetor[i] = matricula;
  }

  for (int i = 0; i < total; i++)
  {
    for (int j = i + 1; j < total; j++)
    {
      if (vetor[i] == vetor[j])
      {
        vetor[j] = 0;
      }
    }
  }

  for (int i = 0; i < total; i++)
  {
    if (vetor[i] == 0)
    {
      alunos--;
    }
  }
  cout << alunos;

  return 0;
}