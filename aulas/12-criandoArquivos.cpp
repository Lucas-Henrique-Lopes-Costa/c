#include <fstream>
using namespace std;

int main()
{
  ofstream arquivo("meus_dados.txt"); // já abre o aquivo e coloca na viariável -> mais eficiente

  ofstream file;
  file.open("meus_dados.txt"); // menos eficiente

  arquivo << "Lucas Henrique..." << endl;
  arquivo.close();
  // close() é chamado automaticamente caso o programa termine normalmente, sem uso de exit().

  return 0;
}