#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("notas.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout;
	fout.open("Resultado.txt");
	if (!fout.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}
	double media, soma = 0;
	char letras[30];
	double notas1, notas2, notas3;
	fin >> letras;


	while (!fin.eof())
	{
		fin >> notas1;
		fin >> notas2;
		fin >> notas3;
		soma += notas1 + notas2 + notas3;
		media = soma / 3;
		fout << letras << " " << endl;

		if (media >= 7.0)
		{
			fout << "Aprovado!" << endl;
		}
		else
		{
			if (media < 4)
			{
				fout << "Reprovado!" << endl;
			}
			else
			{
				fout << "Recuperacao!" << endl;
			}
		}
		fin >> letras;
	}
	
	fin.close();
	fout.close();
	
	cout << "Pronto!" << endl;
	return 0;
}