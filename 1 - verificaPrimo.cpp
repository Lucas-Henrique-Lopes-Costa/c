#include <iostream>
using namespace std;

bool primo(int numero)
{
    int divisor = 2;
    
    while ((divisor < numero))
    {
        if (numero % divisor == 0)
        {
            return false;
        }

        divisor++;
    }

    return true;
}

int main()
{
    int numero;
    cin >> numero;

    cout << primo(numero) << endl;
}