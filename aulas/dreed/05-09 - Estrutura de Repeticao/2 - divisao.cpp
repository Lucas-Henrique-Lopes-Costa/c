#include <iostream>

using namespace std;

int main()
{
    int a, b, cont = -1;

    cin >> a >> b;

    while (a >= 0)
    {
        a -= b;
        cont++;
    }

    cout << cont << endl;

    return 0;
}