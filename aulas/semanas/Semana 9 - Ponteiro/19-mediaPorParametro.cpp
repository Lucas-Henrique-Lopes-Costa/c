#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int soma = 0;

  for (int i = 1; i < argc; i++) // começa do 1 pois o 0 é o nome do programa
    soma += atoi(argv[i]);

  cout << "Media: " << (float)soma / (argc - 1) << endl; // argc - 1 pois o 0 é o nome do programa

  return 0;
}
