#include <iostream>
#include <fstream>
using namespace std;

struct par { int x; int y; };

void mostrar(par& tipo);

int main()
{
	par valores;
	ifstream fin;
	fin.open("pardenum.txt");
	if (!fin.is_open())
	{
		cout << "Falha ao tentar abrir o arquivo!";
		system("pause");
		exit(EXIT_FAILURE);
	}
	fin >> valores.x >> valores.y;
	cout << "Pares: ";
	while (!fin.eof())
	{
		mostrar(valores);
		fin >> valores.x >> valores.y;
	}
	cout << endl;
	fin.close();
}
void mostrar(par& tipo)
{
	cout << "[" << tipo.x << "," << tipo.y << "] ";
}