#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Funcionario {
    long long CPF;
    char nome[70];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    char cargo[70];
    float salario;
    long long telefone;
    char endereco[70];
};

void converterCSVparaBinario(const string& arquivoCSV, const string& arquivoBinario) {
    ifstream arquivoEntrada(arquivoCSV);
    if (!arquivoEntrada.is_open()) {
        cerr << "Erro ao abrir o arquivo CSV." << endl;
        return;
    }

    ofstream arquivoSaida(arquivoBinario, ios::binary);
    if (!arquivoSaida.is_open()) {
        cerr << "Erro ao abrir o arquivo binário." << endl;
        return;
    }

    string linha;
    while (getline(arquivoEntrada, linha)) {
        Funcionario funcionario;

        string campo;
        size_t pos = 0;
        size_t delimPos = linha.find(';');

        campo = linha.substr(pos, delimPos - pos);
        funcionario.CPF = stoll(campo);
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        strncpy(funcionario.nome, campo.c_str(), sizeof(funcionario.nome));
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        funcionario.diaNascimento = stoi(campo);
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        funcionario.mesNascimento = stoi(campo);
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        funcionario.anoNascimento = stoi(campo);
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        strncpy(funcionario.cargo, campo.c_str(), sizeof(funcionario.cargo));
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        funcionario.salario = stof(campo);
        pos = delimPos + 1;

        delimPos = linha.find(';', pos);
        campo = linha.substr(pos, delimPos - pos);
        funcionario.telefone = stoll(campo);
        pos = delimPos + 1;

        campo = linha.substr(pos);
        strncpy(funcionario.endereco, campo.c_str(), sizeof(funcionario.endereco));

        arquivoSaida.write(reinterpret_cast<const char*>(&funcionario), sizeof(Funcionario));
    }

    arquivoEntrada.close();
    arquivoSaida.close();

    cout << "Conversao concluida com sucesso!" << endl;
}

int main() {
    string arquivoCSV = "funcionarios.csv";
    string arquivoBinario = "dados.bin";

    converterCSVparaBinario(arquivoCSV, arquivoBinario);

    return 0;
}