#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;

const int MAX_CADASTROS = 100;

struct Funcionario
{
    long long CPF;
    char nome[40];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    char cargo[15];
    float salario;
    long long telefone;
    char endereco[90];
};

void lerArquivoBinario(const string& nomeArquivo)
{
    ifstream arquivo(nomeArquivo, ios::binary);
    if (!arquivo)
    {
        cout << "Erro ao abrir o arquivo binário." << endl;
        return;
    }

    Funcionario funcionarios[MAX_CADASTROS];
    int numCadastros = 0;

    while (numCadastros < MAX_CADASTROS && arquivo.read((char*)&funcionarios[numCadastros], sizeof(Funcionario)))
    {
        numCadastros++;
    }

    arquivo.close();

    for (int i = 0; i < numCadastros; i++)
    {
        cout << "CPF: " << funcionarios[i].CPF << endl;
        cout << "Nome: " << funcionarios[i].nome << endl;
        cout << "Data de Nascimento: " << funcionarios[i].diaNascimento << "/" << funcionarios[i].mesNascimento << "/" << funcionarios[i].anoNascimento << endl;
        cout << "Cargo: " << funcionarios[i].cargo << endl;
        cout << "Salário: R$" << funcionarios[i].salario << endl;
        cout << "Telefone: " << funcionarios[i].telefone << endl;
        cout << "Endereço: " << funcionarios[i].endereco << endl;
        cout << endl;
    }
}

void importarCSVparaBinario(const string& nomeArquivoCSV, const string& nomeArquivoBinario)
{
    ifstream arquivoCSV(nomeArquivoCSV);
    if (!arquivoCSV)
    {
        cout << "Erro ao abrir o arquivo CSV." << endl;
        return;
    }

    ofstream arquivoBinario(nomeArquivoBinario, ios::binary);
    if (!arquivoBinario)
    {
        cout << "Erro ao criar o arquivo binário." << endl;
        arquivoCSV.close();
        return;
    }

    Funcionario funcionarios[MAX_CADASTROS];
    int numCadastros = 0;

    string linha;
    getline(arquivoCSV, linha); // Descarta a primeira linha do arquivo

    while (numCadastros < MAX_CADASTROS && getline(arquivoCSV, linha))
    {
        istringstream iss(linha);
        string dado;
        int i = 0;

        while (getline(iss, dado, ';'))
        {
            switch (i)
            {
                case 0:
                    funcionarios[numCadastros].CPF = stoll(dado);
                    break;
                case 1:
                    strncpy(funcionarios[numCadastros].nome, dado.c_str(), sizeof(funcionarios[numCadastros].nome));
                    break;
                case 2:
                    funcionarios[numCadastros].diaNascimento = stoi(dado);
                    break;
                case 3:
                    funcionarios[numCadastros].mesNascimento = stoi(dado);
                    break;
                case 4:
                    funcionarios[numCadastros].anoNascimento = stoi(dado);
                    break;
                case 5:
                    strncpy(funcionarios[numCadastros].cargo, dado.c_str(), sizeof(funcionarios[numCadastros].cargo));
                    break;
                case 6:
                    funcionarios[numCadastros].salario = stof(dado);
                    break;
                case 7:
                    funcionarios[numCadastros].telefone = stoll(dado);
                    break;
                case 8:
                    strncpy(funcionarios[numCadastros].endereco, dado.c_str(), sizeof(funcionarios[numCadastros].endereco));
                    break;
                default:
                    break;
            }

            i++;
        }

        arquivoBinario.write(reinterpret_cast<const char*>(&funcionarios[numCadastros]), sizeof(Funcionario));

        numCadastros++;
    }

    arquivoCSV.close();
    arquivoBinario.close();
}

void exportarBinarioparaCSV(const string& nomeArquivoBinario, const string& nomeArquivoCSV)
{
    ifstream arquivoBinario(nomeArquivoBinario, ios::binary);
    if (!arquivoBinario)
    {
        cout << "Erro ao abrir o arquivo binário." << endl;
        return;
    }

    ofstream arquivoCSV(nomeArquivoCSV);
    if (!arquivoCSV)
    {
        cout << "Erro ao criar o arquivo CSV." << endl;
        arquivoBinario.close();
        return;
    }

    Funcionario funcionarios[MAX_CADASTROS];
    int numCadastros = 0;

    while (numCadastros < MAX_CADASTROS && arquivoBinario.read((char*)&funcionarios[numCadastros], sizeof(Funcionario)))
    {
        numCadastros++;
    }

    arquivoBinario.close();

    for (int i = 0; i < numCadastros; i++)
    {
        arquivoCSV << funcionarios[i].CPF << ';'
                   << funcionarios[i].nome << ';'
                   << funcionarios[i].diaNascimento << ';'
                   << funcionarios[i].mesNascimento << ';'
                   << funcionarios[i].anoNascimento << ';'
                   << funcionarios[i].cargo << ';'
                   << funcionarios[i].salario << ';'
                   << funcionarios[i].telefone << ';'
                   << funcionarios[i].endereco << '\n';
    }

    arquivoCSV.close();
}

int main()
{
    string arquivoCSV = "funcionarios.csv";
    string arquivoBinario = "funcionarios.bin";

    // Importar do CSV para o binário
    importarCSVparaBinario(arquivoCSV, arquivoBinario);

    // Ler o arquivo binário
    lerArquivoBinario(arquivoBinario);

    // Exportar do binário para o CSV
    string novoArquivoCSV = "funcionarios_exportados.csv";
    exportarBinarioparaCSV(arquivoBinario, novoArquivoCSV);

    return 0;
}
