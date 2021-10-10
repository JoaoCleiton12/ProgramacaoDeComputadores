#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "digite um numero positivo ou negativo: ";
	cin >> numero;

	int absoluto = numero > 0 ? numero : -numero;

	cout << "O valor absoluto de " << numero << " e " << absoluto;
}