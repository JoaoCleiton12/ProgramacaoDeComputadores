#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int valor;

	ifstream fin;
	fin.open("integer.bin", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "Arquivo integer.bin encontrado!\n";
		fin.read((char*)&valor, sizeof(int));
		cout << "Ele contem o numero " << valor << "\n";
	}
	fin.close();

	cout << "digite um numero inteiro: ";
	cin >> valor;
	
	ofstream fout;
	fout.open("integer.bin", ios_base::out | ios_base::binary);
	fout.write((char*)&valor, sizeof(int));
	fout.close();

	cout << "Numero armazenado no arquivo integer.bin" << endl;
}