#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d > a and d > b and d > c) {
        cout << a << endl << b << endl << c << endl << d << endl;
    } else if (d > a and d > b and d < c) {
        cout << a << endl << b << endl << d << endl << c << endl;
    } else if (d > a and d < b and d < c) {
        cout << a << endl << d << endl << b << endl << c << endl;
    } else if (d < a and d < b and d < c) {
        cout << d << endl << a << endl << b << endl << c << endl;
    }

    return 0;
}