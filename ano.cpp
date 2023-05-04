#include <iostream>

using namespace std;

int main()
{
    int ano;
    cin >> ano;

    if ((ano % 400 == 0) or (ano % 4 == 0 and ano % 100 != 0))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}