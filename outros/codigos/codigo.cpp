#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

struct Funcionario
{
	long long CPF;
	char nome[100];
	int diaNascimento;
	int mesNascimento;
	int anoNascimento;
	char cargo[100];
	float salario;
	long long telefone;
	char endereco[100];
};

int main()
{
	Funcionario *funcionario = new Funcionario[100];

	ifstream ler("funcionarios.csv");

	if (ler.is_open())
	{
		string linha;
		int i = 0;

		while (getline(ler, linha) && i < 100)
		{
			size_t pos = 0;
			size_t delimPos;

			delimPos = linha.find(';', pos);
			funcionario[i].CPF = stoll(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			strncpy(funcionario[i].nome, linha.substr(pos, delimPos - pos).c_str(), sizeof(funcionario[i].nome));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			funcionario[i].diaNascimento = stoi(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			funcionario[i].mesNascimento = stoi(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			funcionario[i].anoNascimento = stoi(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			strncpy(funcionario[i].cargo, linha.substr(pos, delimPos - pos).c_str(), sizeof(funcionario[i].cargo));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			funcionario[i].salario = stof(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find(';', pos);
			funcionario[i].telefone = stoll(linha.substr(pos, delimPos - pos));
			pos = delimPos + 1;

			delimPos = linha.find('\n', pos);
			strncpy(funcionario[i].endereco, linha.substr(pos).c_str(), sizeof(funcionario[i].endereco));

			i++;
		}

		ler.close();
	}
	else
	{
		cout << "Não foi possível ler o arquivo" << endl;
		return 1;
	}

	ofstream saida("funcionarios.bin", ios::binary | ios::out);
	if (saida.is_open())
	{
		saida.write(reinterpret_cast<const char *>(funcionario), sizeof(Funcionario) * 100);
		saida.close();
	}
	else
	{
		cout << "Erro ao escrever no arquivo" << endl;
		return 1;
	}

	delete[] funcionario;

	// Leitura e impressão do arquivo binário
	ifstream arquivoBinario("funcionarios.bin", ios::binary);
	if (arquivoBinario.is_open())
	{
		Funcionario *funcionarioLido = new Funcionario[100];
		arquivoBinario.read(reinterpret_cast<char *>(funcionarioLido), sizeof(Funcionario) * 100);
		arquivoBinario.close();

		for (int i = 0; i < 100; i++)
		{
			cout << "CPF: " << funcionarioLido[i].CPF << endl;
			cout << "Nome: " << funcionarioLido[i].nome << endl;
			cout << "Data de Nascimento: " << funcionarioLido[i].diaNascimento << "/" << funcionarioLido[i].mesNascimento << "/" << funcionarioLido[i].anoNascimento << endl;
			cout << "Cargo: " << funcionarioLido[i].cargo << endl;
			cout << "Salario: " << funcionarioLido[i].salario << endl;
			cout << "Telefone: " << funcionarioLido[i].telefone << endl;
			cout << "Endereco: " << funcionarioLido[i].endereco << endl;
			cout << endl;
		}

		delete[] funcionarioLido;
	}
	else
	{
		cout << "Erro ao abrir o arquivo binário" << endl;
		return 1;
	}

	return 0;
}