#include <iostream>
using namespace std;

int main()
{
	
//Usando o laço for 

	int soma = 0;
	for (int i = 1; i <= 100; i+= 2)
	{
		soma += i;
	}
	cout << "soma usando for: " << soma << endl;

	cout << endl;

//Usando o laço while 
	int j = 1;
	int somawhi = 0;
	while (j <= 100)
	{
		somawhi += j;
		j += 2;
	}
	cout << "soma usando while: " << somawhi << endl;

	cout << endl;
//Usando o laço Do-While
	int k = 1;
	int somadowhi = 0;
	do
	{
		somadowhi += k;
		k += 2;
	} while (k < 100);
	cout << "soma usando Do-While: " << somadowhi << endl;
	
}