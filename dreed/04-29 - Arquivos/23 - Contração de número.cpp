#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    ifstream arquivoIn("entrada.txt");
    arquivoIn >> N;

    int n1 = (N / 100000);
    int n2 = (N % 100000) / 10000;
    int n3 = (N % 10000) / 1000;
    int n4 = (N % 1000) / 100;
    int n5 = (N % 100) / 10;
    int n6 = (N % 100) % 10;

    int d1 = n1 / n2;
    int d2 = n2 / n3;
    int d3 = n3 / n4;
    int d4 = n4 / n5;
    int d5 = n5 / n6;

    ofstream arquivoOut;
    arquivoOut.open("saida.txt");
    arquivoOut << d1 << d2 << d3 << d4 << d5;
    arquivoOut.close();

    return 0;
}