#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
  system("clear||cls");

  int var1, var2;
  int *pont1;

  var1 = 5;
  pont1 = &var1; // imprime o endereço essa variável

  cout << "Valor da vaiavel pelo seu nome: " << var1 << endl;
  cout << "Endereco do ponteiro: " << pont1 << endl;
  cout << "Valor da vaiavel pelo seu ponteiro: " << *pont1 << endl;

  // redefinindo dados
  var2 = var1;
  var2 = *pont1;
  cout << var2;

  var1 = 30;
  *pont1 = 35;
  cout << var1;

  var2 = 50;
  pont1 = &var2;
  cout << *pont1;

  int *pont2;
  pont2 = NULL;
  cout << pont2 << endl; // número sem sentido
  // cout << *pont2 << endl; // número sem sentido

  int *pont3 = new int;
  *pont3 = 35;
  cout << pont3 << endl;  // endereço da variável
  cout << *pont3 << endl; // acessa o valor, tomar cuidado porque se trocar o ponteiro, ela fica perdida

  *pont3 = *pont1; // acontece o vazamento de memória -> faz o delete
  delete pont3;
  cout << *pont3;

  return 0;
}