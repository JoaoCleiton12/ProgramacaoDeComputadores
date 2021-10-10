#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	ofstream fout;
	fout.open("tamanho.txt");
	for (int i = 0; i < 100; i++)
	{
		fout << i << endl;;
		
	}
	fout.close();

	ofstream fout2;
	fout2.open("tamanho.bin", ios_base::out | ios_base::binary);
	if (!fout2.is_open())
	{
		cout << "Arquivo n�o pode ser aberto!" << endl;
		system("pause");
		return EXIT_FAILURE;

	}
	for (int i = 0; i < 100; i++)
	{
		cout << i << endl;
		fout2.write((char*)&i, sizeof(int));
	}
	fout2.close();
}
/*
	O arquivo texto ficou com um tamanho de 390 bytes,
	enquanto o arquivo binario ficou com 400 bytes.
	Isso se deve ao fato de que no arquivo binario ele guarda um n�mero
	inteiro em 4 bytes, como temos 100 n�meros...4 * 100 = 400.
	J� no arquivo texto, ele guarda cada n�mero como sendo um caracter
	e cada carecter ocupa 1 byte, logo os 100 n�meros possuem um total de 390
	caracteres, fazendo assim o arquivo texto ter um tamanho de 390 bytes.
	*/