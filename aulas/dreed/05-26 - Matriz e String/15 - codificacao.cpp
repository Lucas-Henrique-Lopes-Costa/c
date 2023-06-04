#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
int main()
{
    string dados, nomearq;
    string linha;

    cin >> nomearq;

    ifstream arq(nomearq);
    ofstream arqSaida("cifrado.txt");

    if (arq.is_open())
    {
        while (getline(arq, linha))
        {
            for (long unsigned i = 0; i < linha.size(); i++)
            {
                if (linha[i] == 'V')
                {
                    linha[i] = 'A';
                }

                else if (linha[i] == 'W')
                {
                    linha[i] = 'B';
                }

                else if (linha[i] == 'X')
                {
                    linha[i] = 'C';
                }

                else if (linha[i] == 'Y')
                {
                    linha[i] = 'D';
                }

                else if (linha[i] == 'Z')
                {
                    linha[i] = 'E';
                }

                else if (linha[i] != ' ' and linha[i] != '\n')
                {
                    linha[i] = linha[i] + 5;
                }
            }

            arqSaida << linha << endl;
        }
    }

    return 0;
}
