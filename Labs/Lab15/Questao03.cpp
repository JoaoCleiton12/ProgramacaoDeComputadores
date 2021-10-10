#include <iostream>
using namespace std;

int main()
{
	int quantnume;
	cout << "Quantos valores deseja guardar? ";
	cin >> quantnume;
	int* numeros = new int[quantnume];

	cout << "Quais os valores? ";

	int i = 0;
	for (i = 0; i < quantnume; i++)
	{
		cin >> numeros[i];
	}
	
	cout << "Os valores ";
	for (i = 0; i < quantnume; i++)
	{
		cout << " " << numeros[i] << " ";
	}
	
	cout << "foram armazenados." << endl;

	delete[] numeros;
}