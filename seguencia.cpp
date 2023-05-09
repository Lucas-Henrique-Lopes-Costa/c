#include <iostream>

using namespace std;

int main()
{
    int a, soma = 0, contPositivo = 0, contNegativo = 0;

    while (a != 0)
    {
        cin >> a;
        soma = soma + a;
        if (a > 0)
        {
            contPositivo++;
        }
        if (a < 0)
        {
            contNegativo++;
        }
    }

    cout << float(soma) / (float(contNegativo) + float(contPositivo)) << endl;
    cout << contPositivo << endl;
    cout << contNegativo << endl;
    cout << float(contPositivo) / (float(contNegativo) + float(contPositivo)) << endl;
    cout << float(contNegativo) / (float(contNegativo) + float(contPositivo)) << endl;

    return 0;
}