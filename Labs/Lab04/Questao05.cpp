#include <iostream>
using namespace std;

int Absoluto(int n1);

int main()
{
	int numero;
	cout << "digite um numero inteiro: ";
	cin >> numero;

	cout << "valor absoluto: " << Absoluto(numero) << endl;

}

int Absoluto(int n1)
{
	int valorabsoluto;
	if (n1 < 0)
	{
		valorabsoluto = -1 * n1;
		return(valorabsoluto);
	}

	else
	{
		valorabsoluto = n1;
		return(valorabsoluto);

	}
}
