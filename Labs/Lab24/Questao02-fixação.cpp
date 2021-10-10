#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int cont = 0;
	int valor;

	ifstream fin;
	fin.open("vet.dat", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "O arquivo vet.dat contem:\n";

		// recupera quantidade de elementos
		fin.read((char*) &cont, sizeof(int));

		// lê e exibe cada elemento
		for (int i = 0; i < cont; i++)
		{
			fin.read((char*) &valor, sizeof(int));
			cout << valor << " ";
		}
		cout << endl;
	}
	fin.close();

	// sobrescreve arquivo com novos valores
	ofstream fout;
	fout.open("vet.dat", ios_base::out | ios_base::binary);

	// escreve a quantidade de elementos
	cont = 0;
	fout.write((char*)&cont, sizeof(int));
	//----------------------------------------------------------
	cout << "digite numeros (0 para sair):\n";
	
	while (cin >> valor && valor != 0)
	{
		fout.write((char*)&valor, sizeof(int));
		cont++;
	}
	

	//atualiza quantidade de elementos
	fout.seekp(0, ios_base::beg);
	fout.write((char*)&cont, sizeof(int));
	fout.close();
	
	cout << cont << " numeros foram armazenados em vet.dat\n";
}