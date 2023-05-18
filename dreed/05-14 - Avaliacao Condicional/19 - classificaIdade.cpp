#include <iostream>

using namespace std;

int main()
{
    /*
        Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. Para idade inferior a 5, deverá mostrar mensagem: "Nao registrado".

        Obs.: As strings de saída não devem possuir acentuação.

        Categoria	Idade
        Infantil	5 a 7
        Juvenil	8 a 10
        Adolescente	11 a 15
        Adulto	16 a 30
        Senior	Acima de 30
        Entradas:

        Idade do nadador (número inteiro).
        Saídas:

        Texto que indica a categoria.
        Exemplo de Entrada:

        16
        Exemplo de Saída:

        Adulto
    */

    int idade;
    cin >> idade;

    if (idade < 5)
    {
        cout << "Nao registrado";
    }
    else if (idade <= 7)
    {
        cout << "Infantil";
    }
    else if (idade <= 10)
    {
        cout << "Juvenil";
    }
    else if (idade <= 15)
    {
        cout << "Adolescente";
    }
    else if (idade <= 30)
    {
        cout << "Adulto";
    }
    else
    {
        cout << "Senior";
    }

    return 0;
}