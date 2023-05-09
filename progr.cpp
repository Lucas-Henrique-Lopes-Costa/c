#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, r, cont = 1;

    cin >> r >> n;

    while (cont <= n)
    {
        float pg = 1 * pow(r, cont - 1);
        cout << pg << endl;
        cont++;
    }

    return 0;
}