#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	int peso1, comprimento;
	int pesototal = 0;
	char letras[80];

	fin >> letras;
	while (!fin.eof())
	{
		fin >> peso1;
		fin >> comprimento;
		pesototal += peso1;
		fin >> letras;
		
	}

	cout << "Peso total em gramas: " << pesototal;

	fin.close();
}