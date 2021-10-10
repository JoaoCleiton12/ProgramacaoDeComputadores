#include <iostream>
using namespace std;

int main()
{
	int numlivros[12];
	const char meses[12][12] =
	{
		{"janeiro"}, {"fevereiro"}, {"marco"},
		{"abril"}, {"maio"}, {"junho"}, {"julho"},
		{"agosto"}, {"setembro"}, {"outubro"}, {"novembro"},
		{"dezembro"}
	};
	
	cout << "Digite o número de livros vendidos:" << endl;
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << meses[i] << ": ";
		cin >> numlivros[i];
		total += numlivros[i];
	}

 
	cout << "em um ano foram vendidos " << total << " livros." << endl;
}