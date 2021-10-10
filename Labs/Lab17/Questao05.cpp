#include <iostream>
using namespace std;

int main()
{
	int somadosquad = 0;
	int quadsoma = 0;
	for (int i = 0; i <= 100; i++)
	{
		somadosquad += i * i;
	}
	for (int i = 0; i <= 100; i++)
	{
		quadsoma += i;
		
	}
	cout << endl;
	quadsoma = (quadsoma * quadsoma);
	cout << "a diferenca entre\na soma dos quadrados e quadrado da soma dos 100 primeiros numeros naturais: " 
		 << (quadsoma - somadosquad);
	cout << endl;
	
}