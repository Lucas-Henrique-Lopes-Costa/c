#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int cont = 0;
    
    string arquivoNome, palavra, dados;
    cin >> arquivoNome >> palavra;
    ifstream arquivo(arquivoNome);

    // verifica se existe o arquivo
    if (arquivo)
    {
        while (arquivo >> dados) // será repetido enquanto for possível ter um valor
        {
            if (palavra == dados) {
                cont++;
            }
        }
        arquivo.close();
    }

    cout << cont << endl;

    return 0;
}