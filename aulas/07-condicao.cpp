#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  float nota1, nota2;
  cout << "Informe a nota 1: ";
  cin >> nota1;

  cout << "Informe a nota 2: ";
  cin >> nota2;

  float freq;
  cout << "Qual e a frequencia: ";
  cin >> freq;

  system("clear||cls");

  float media = (nota1 + nota2) / 2;

  if (media < 2.5)
  {
    cout << "Nota D!\n";
  }
  else if (media < 5)
  {
    cout << "Nota C!\n";
  }
  else if (media < 7.5)
  {
    cout << "Nota B!\n";
  }
  else
  {
    cout << "Nota A!\n";
  }
  cout << "Com uma media de: " << media << " pontos." << endl;

  if (media < 5 || freq < 75)
  {
    cout << "Aluno Reprovado.\n";
  }
  else
  {
    cout << "Aluno Aprovado.\n";
  }

  (media == 10) ? cout << "Aluno nota maxima!\n" : cout << "Parabens por finalizar o ano!!\n";

  return 0;
}