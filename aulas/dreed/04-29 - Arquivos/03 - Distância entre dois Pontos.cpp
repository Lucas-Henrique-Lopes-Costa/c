#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float x1, x2, y1, y2, soma;
    ifstream arqventr;

    arqventr.open("entrada.txt");
    arqventr >> x1 >> y1 >> x2 >> y2;
    arqventr.close();

    soma = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    cout << sqrt(soma) << endl;
    return 0;
}