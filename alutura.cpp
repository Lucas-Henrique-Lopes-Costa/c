#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float qF, altura;
    string genero;
    int cont = 0, maior = 0, alturaM = 0, contF = 0, alturaF = 0, contM= 0, alturaT = 0;

    cin >> qF >> altura >> genero;

    int menor = altura;

    while (cont < qF)
    {
        if (altura > maior) {
            maior = altura;
        } 
        
        if (altura < menor) {
            menor = altura;
        }

        if ( genero == "m") {
            alturaM += altura;
            contM++;
        }
        if ( genero == "f") {
            alturaF += altura;
            contF++;
        }

        alturaT += altura;
        cont++;

        cin >> qF >> altura >> genero;
    }

    cout << maior << endl;
    cout << menor << endl;
    cout << float(alturaF) / float(contF) << endl;
    cout << float(alturaM) / float(contM) << endl;
    cout << float(alturaT) / float(cont) << endl;

    return 0;
}