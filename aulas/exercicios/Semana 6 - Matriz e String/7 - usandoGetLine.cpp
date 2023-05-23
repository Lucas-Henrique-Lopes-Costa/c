#include <iostream>
using namespace std;

int main()
{
  string nome, email;
  int idade;

  cin >> email;
  getline(cin, nome); // se usar apenas assim ele não acaba de ler a idade
  cin >> idade;
  
  cout << "Nome: " << nome << endl;
  cout << "Email: " << email << endl;
  cout << "Idade: " << idade << endl;
  
  return 0;
}
