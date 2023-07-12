#include <iostream>
using namespace std;

int foo2(int &a, int &b);
int foo3(int *a, int *b); // pasando o endereço, podem ser alterados

int main(int *a, int *b) // passagem por copia, não altera os valores originais
{
  int x, y;
  foo2(x, y); // cópia ou referência?
  foo3(&x, &y);
}