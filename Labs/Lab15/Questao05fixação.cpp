#include <iostream>
using namespace std;

union identificacao
{
	char nome[20];
	int matricula;
};

enum situacao { Aprovado, Trancado, Reprovado };

struct alunos
{
	identificacao tipo;
	unsigned int codigodiciplica;
	situacao tipositu;
};

int main()
{
	int numalunos;
	cout << "digite o numero de alunos: ";
	cin >> numalunos;

	alunos* vetorA = new alunos[numalunos];
	
	int teste;
	cout << "nome ou numero(1 ou 2)?";
	cin >> teste;
	if (teste == 1)
	{
		cout << "nome: ";
		cin >> vetorA[0].tipo.nome;
	}
	if (teste == 2)
	{
		cout << "matricula: ";
		cin >> vetorA[0].tipo.matricula;
	}
	cout << "codigo: ";
	cin >> vetorA[0].codigodiciplica;
	
	if (teste == 1)
	{
		cout << vetorA[0].tipo.nome;
	}
	if (teste == 2)
	{
		cout << vetorA[0].tipo.matricula;
	}

	cout << " " << vetorA[0].codigodiciplica << " " << vetorA[0].tipositu;

	delete[] vetorA;
}