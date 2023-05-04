#include <iostream>

using namespace std;

int main()
{
    float valorMulta;
    int velocidadeMax, valorResgistrado;

    cin >> valorMulta >> velocidadeMax >> valorResgistrado;

    float aumento = ((float)valorResgistrado / (float)velocidadeMax) - 1;

    if (aumento < 0.3)
    {
        cout << "NAO SE APLICA";
    }
    else
    {
        cout << "R$ " << valorMulta * 1.5;
    }

    return 0;
}