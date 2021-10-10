#include <iostream>
using namespace std;

int main()
{
	int sorteio = rand() % 11;
	int numero;
	cout << "Qual foi o numero sorteado? ";
	cin >> numero;

	while (numero != sorteio)
	{
		if (numero > sorteio)
		{
			cout << "muito alto. ";
		}
		if (numero < sorteio)
		{
			cout << "muito baixo. ";
		}
		cin >> numero;
	 }
	cout << "Acertou!" << endl;
}