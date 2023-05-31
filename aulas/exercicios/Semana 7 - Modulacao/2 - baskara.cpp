#include <iostream>
#include <cmath>
using namespace std;

void baskara(float a, float b, float c, int &numRaizes, float &x1, float &x2)
{
    float delta = pow(b, 2) - (4 * a * c);

    if (delta > 0)
    {
        numRaizes = 2;
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
    }
    else if (delta == 0)
    {
        numRaizes = 1;
        x1 = (-b) / 2 * a;
    }
    else
    {
        numRaizes = 0;
    }
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    float raiz1, raiz2;
    int numR;

    baskara(a, b, c, numR, raiz1, raiz2);

    if (numR == 2)
    {
        cout << a << "x²" << b << "x" << c << " = " << "x1 = " << raiz1 << ", x2 = " << raiz2;
    }
    else if (numR == 1)
    {
        cout << a << "x²" << b << "x" << c << " = " << "x = " << raiz1;
    }
    else
    {
        cout << "Nao Tem Raiz" << endl;
    }
}