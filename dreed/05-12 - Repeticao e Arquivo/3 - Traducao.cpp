#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string nome_arq_portugues, nome_arq_ingles, nome_arq_dicionario;

  cin >> nome_arq_portugues;
  cin >> nome_arq_ingles;
  cin >> nome_arq_dicionario;

  ifstream arq_portugues(nome_arq_portugues);
  ifstream arq_ingles(nome_arq_ingles);
  ofstream arq_dicionario(nome_arq_dicionario);

  if (arq_portugues and arq_ingles and arq_dicionario)
  {
    string palavra_portugues, palavra_ingles;
    while (arq_portugues >> palavra_portugues and arq_ingles >> palavra_ingles)
    {
      arq_dicionario << palavra_portugues << ": " << palavra_ingles << endl;
    }
  }
  else
  {
    cout << "Erro ao abrir os arquivos!" << endl;
  }

  return 0;
}
