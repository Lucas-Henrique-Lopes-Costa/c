#include <iostream>

using namespace std;

int main()
{
    int idade;
    cin >> idade;

    if (idade > 18)
    {
        cout << "MAIOR DE IDADE";
    }
    else
    {
        cout << "MENOR DE IDADE";
    }

    return 0;
}
