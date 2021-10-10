#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "Voce quer que eu conte de 1 ate que numero? ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = numero; i > 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i < 10; i += 2)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = numero - 1; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << ++i << " ";
	}
	cout << endl;
	for (int i = numero; i > 0; i-=2)
	{
		cout << i << " ";
	}
}