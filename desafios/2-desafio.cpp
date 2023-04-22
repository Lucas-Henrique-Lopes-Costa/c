#include <iostream>

using namespace std;

int main()
{
  system("clear||cls");

  float n1, n2, n3, media;
  cout << "Informe a nota da 1 prova: ";
  cin >> n1;
  cout << "Informe a nota da 2 prova: ";
  cin >> n2;
  cout << "Informe a nota da 3 prova: ";
  cin >> n3;

  float math = (n1 + n2 + n3) / 3;

  cout << "Qual a media da turma? ";
  cin >> media;

  if (math == media)
  {
    cout << "Ele esta na media" << endl;
  }
  else if (math > media)
  {
    cout << "Ele esta acima da media" << endl;
  }
  else
  {
    cout << "Ele esta abaixo da media" << endl;
  }

  return 0;
}