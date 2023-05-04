#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    int X;
    cin >> X;

    if (X == 1)
    {
        cout << (a + b) / 2 << endl;
    }
    else if (X == 2)
    {
        if (a > b)
        {
            cout << a - b << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }
    else if (X == 3)
    {
        cout << a * b << endl;
    }
    else if (X == 4)
    {
        if (b == 0)
        {
            cout << "ERRO" << endl;
        }
        else
        {
            cout << a / b << endl;
        }
    }
    else
    {
        cout << "ERRO" << endl;
    }

    return 0;
}