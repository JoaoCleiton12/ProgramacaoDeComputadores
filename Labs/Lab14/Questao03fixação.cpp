#include <iostream>
using namespace std;

int incrementa(int n);
int mais(int* n);

int main()
{
	int numero;
	int* pontei = &numero;
	cout << "digite um valor: ";
	cin >> numero;
	cout << "Resultado apos Mais: " << mais(&numero) << endl;
	cout << "Resultado apos Incrementa: " << incrementa(numero) << endl;
}
int incrementa(int n)
{
	return(n + 1);
}
int mais(int* n)
{
	*n = *n + 1;
	return(*n);
}