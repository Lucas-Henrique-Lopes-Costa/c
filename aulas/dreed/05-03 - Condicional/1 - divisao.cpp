#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 or b == 0)
    {
        cout << "erro";
    }
    else
    {
        float div = a / b;
        cout << div << endl;

        float resto = a % b;
        cout << resto << endl;
    }

    return 0;
}
