#include <iostream>
using namespace std;

int main()
{
	int numero;
	int quanti = 0;
	int soma = 0;
	cout << "Digite numeros inteiros (0 para finalizar):\n";
	cin >> numero;
	while (numero != 0)
	{
		soma += numero;
		quanti++;
		cin >> numero;
	}
	cout << "Foram lidos " << quanti << " numeros." << endl;
	cout << "A soma dos numeros e " << soma << endl;
	cout << "A media e " << soma / quanti << endl;
}