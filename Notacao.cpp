#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string sinal;
    cin >> sinal;

    if (sinal == "+") {
        cout << a+b;
    } else if (sinal == "-") {
        cout << a-b;
    } else if (sinal == "*") {
        cout << a*b;
    } else if (sinal == "/") {
        cout << a/b;
    }

    return 0;
}