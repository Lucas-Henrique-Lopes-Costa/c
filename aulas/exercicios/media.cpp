#include <iostream>

using namespace std;

int main()
{
  float nota1, nota2, nota3, nota4, media;

  cout << "Insira as notas 1, 2, 3 e 4: ";
  cin >> nota1 >> nota2 >> nota3 >> nota4;

  media = (nota1 + nota2 + nota3 + nota4) / 4;
  cout << "A media foi: " << media << endl;

  return 0;
}