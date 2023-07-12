#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  for (int i = 1; i < argc; i++) // começa do 1 pois o 0 é o nome do programa
    cout << i << " : " << argv[i] << endl;

  return 0;
}
