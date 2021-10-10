#include <iostream>
#include <fstream>
using namespace std;

struct alunos
{
	char nome[15];
	char sobrenome[15];
	char turno;
	int serie;
};

int main()
{
	alunos lista[12];

	ifstream fin;
	fin.open("listadealunos.txt");
	if (!fin.is_open())
	{
		cout << "abertura do arquivo falhou\n";
		system("pause");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < 12; i++)
	{
		fin >> lista[i].nome;
		fin >> lista[i].sobrenome;
		fin >> lista[i].turno;
		fin >> lista[i].serie;
	}

	int i = 0;
	//-------------------------------------------------------------------
	cout << "Matutino 6a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{
		
		if ((lista[i].turno == 'M') && (lista[i].serie == 6))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	//--------------------------------------------------------------------
	cout << endl;
	cout << "Matutino 7a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{

		if ((lista[i].turno == 'M') && (lista[i].serie == 7))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	//-------------------------------------------------------------------
	cout << endl;
	cout << "Matutino 8a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{

		if ((lista[i].turno == 'M') && (lista[i].serie == 8))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	//------------------------------------------------------------------
	cout << endl;
	cout << "Vespertino 6a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{

		if ((lista[i].turno == 'T') && (lista[i].serie == 6))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	//----------------------------------------------------------------
	cout << endl;
	cout << "Vespertino 7a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{

		if ((lista[i].turno == 'T') && (lista[i].serie == 7))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	//-----------------------------------------------------------------
	cout << endl;
	cout << "Vespertino 8a Serie\n";
	cout << "-------------------\n";
	for (int i = 0; i < 12; i++)
	{

		if ((lista[i].turno == 'T') && (lista[i].serie == 8))
		{
			cout << lista[i].nome << " " <<
				lista[i].sobrenome << " " <<
				lista[i].turno << lista[i].serie << endl;
		}
	}
	fin.close();
}