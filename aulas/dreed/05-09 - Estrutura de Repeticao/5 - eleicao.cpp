#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int total = 0;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, vn = 0, vb = 0;
    int v;

    cin >> v;

    while (v > 0)
    {
        if (v == 1)
        {
            v1++;
        }
        else if (v == 2)
        {
            v2++;
        }
        else if (v == 3)
        {
            v3++;
        }
        else if (v == 4)
        {
            v4++;
        }
        else if (v == 5)
        {
            vn++;
        }
        else if (v == 6)
        {
            vb++;
        }

        total++;
        cin >> v;
    }

    cout << "1: " << v1 << " " << fixed << setprecision(11) << float(v1) / float(total) << endl;
    cout << "2: " << v2 << " " << fixed << setprecision(11) << float(v2) / float(total) << endl;
    cout << "3: " << v3 << " " << fixed << setprecision(11) << float(v3) / float(total) << endl;
    cout << "4: " << v4 << " " << fixed << setprecision(11) << float(v4) / float(total) << endl;
    cout << "5: " << vn << " " << fixed << setprecision(11) << float(vn) / float(total) << endl;
    cout << "6: " << vb << " " << fixed << setprecision(11) << float(vb) / float(total) << endl;
    cout << "7: " << total - vn - vb << " " << float((total - vn - vb)) / float(total) << endl;

    return 0;
}