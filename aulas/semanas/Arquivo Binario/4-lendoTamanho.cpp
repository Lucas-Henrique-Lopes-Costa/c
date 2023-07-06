#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ifstream entrada("teste.txt");

  // tellg() retorna a posicao do ponteiro de leitura
  // tellp() retorna a posicao do ponteiro de escrita

  // seekg() move o ponteiro de leitura para a posicao desejada
  // seekp() move o ponteiro de escrita para a posicao desejada

  if (entrada)
  {
    entrada.seekg(0, entrada.end); // move o ponteiro de leitura para o final do arquivo

    int tam = entrada.tellg();
    entrada.seekg(0, entrada.beg);
    
    cout << tam << endl;
    
    char bloco[tam];
    
    entrada.read(bloco, tam);
    cout.write(bloco, tam);
  }

  else
    cout << "arquivo nao pode ser aberto!" << endl;
  
  return 0;
}