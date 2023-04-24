#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, media;

    cout << "Insira as notas 1, 2 e 3" << endl;
    cin >> nota1 >> nota2 >> nota3;

    media = (nota1 + nota2 + nota3) / 3;
    cout << "A media foi: " << media << endl;

    if (media >= 6)
    {
        cout << "Aluno aprovado" << endl;
    }
    else
        cout << "Aluno reprovado" << endl;

    if (media == 10)
    {
        cout << "PARABENS!! voce nao perdeu nenhum ponto" << endl;
    }
    else if (media >= 8)
    {
        cout << "Resultado otimo parabens!" << endl;
    }
    else if (media >= 6)
    {
        cout << "voce foi aprovado, mas deve se dedicar mais" << endl;
    }
    else if (media < 6)
    {
        cout << "nao foi dessa vez, estude mais e te vejo na recuperacao" << endl;
    }

    return 0;
}