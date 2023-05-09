#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int cont = 0;
    char dados;
    string arquivoNome;

    cin >> arquivoNome;

    ifstream arquivoIn(arquivoNome);

    // verifica se existe o arquivo
    if (arquivoIn)
    {
        while (arquivoIn >> dados) // será repetido enquanto for possível ter um valor
        {
            cont++;
        }
        arquivoIn.close();
    }

    cout << cont << endl;

    return 0;
}