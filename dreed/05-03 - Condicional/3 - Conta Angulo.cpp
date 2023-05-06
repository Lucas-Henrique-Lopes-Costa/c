#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h, angulo;
    float x, y;
    cin >> h >> x >> y;

    if (h > 360)
    {
        angulo = h % 360;
    }
    else
    {
        angulo = h;
    }

    if (angulo > 0 and angulo < 90)
    {
        cout << fixed << setprecision(1) << x + y << endl;
    }
    else if (angulo > 90 and angulo < 180)
    {
        cout << fixed << setprecision(1) << x * y << endl;
    }
    else if (angulo > 180 and angulo < 270)
    {
        cout << fixed << setprecision(1) << x / y << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << pow(x, y) << endl;
    }

    return 0;
}
