#include <fstream>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
  ofstream arquivo("arquivo.txt", ios::app);

  int tempo = time(NULL);
  arquivo << tempo << endl;
  
  return 0;
}