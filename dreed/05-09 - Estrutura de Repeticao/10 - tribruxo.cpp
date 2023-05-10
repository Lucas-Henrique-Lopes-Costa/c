#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string nomeArquivo, nome1, nome2, nome3, nome;
  int votos, votos1 = 0, votos2 = 0, votos3 = 0, cont = 0;

  cin >> nomeArquivo;
  ifstream arquivoIn(nomeArquivo);

  arquivoIn >> nome1 >> nome2 >> nome3 >> votos;

  while (cont < votos)
  {
    arquivoIn >> nome;

    if (nome == nome1)
    {
      votos1++;
    }
    else if (nome == nome2)
    {
      votos2++;
    }
    else if (nome == nome3)
    {
      votos3++;
    }

    cont++;
  }

  if (votos1 > votos2 and votos1 > votos3)
  {
    cout << votos1 << endl;
  }
  else if (votos2 > votos1 and votos2 > votos3)
  {
    cout << votos2 << endl;
  }
  else if (votos3 > votos1 and votos3 > votos2)
  {
    cout << votos3 << endl;
  }

  return 0;
}