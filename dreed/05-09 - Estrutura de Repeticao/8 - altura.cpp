#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int fichas, contF = 0, contM = 0;
    string genero;
    double altura, maior = 0, alturaM = 0, alturaF = 0, alturaT = 0;

    cin >> fichas;

    float menor = altura;

    while (fichas > 0)
    {
        cin >> altura >> genero;
        
        if (altura > maior)
        {
            maior = altura;
        }

        if (altura < menor or menor == 0)
        {
            menor = altura;
        }

        if (genero == "m")
        {
            alturaM += altura;
            contM++;
        }
        else if (genero == "f")
        {
            alturaF += altura;
            contF++;
        }

        alturaT += altura;
        fichas--;
    }

    cout << maior << endl;
    cout << menor << endl;

    if (contF == 0)
    {
        cout << "erro" << endl;
    }
    else
    {
        cout << alturaF / contF << endl;
    }

    if (contM == 0)
    {
        cout << "erro" << endl;
    }
    else
    {
        cout << alturaM / contM << endl;
    }

    cout << alturaT / (contF + contM) << endl;

    return 0;
}