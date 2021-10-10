#include <iostream>
using namespace std;

void exibir(char n);

int main()
{
	char ch;
	cout << "digite um caractere: ";
	cin >> ch;

	cout << endl;
	exibir(ch);
	cout << "Programando em C++\n";
	exibir(ch);
}
void exibir(char n)
{
	for (int i = 0; i < 20; i++)
	{
		cout << n;
	}
	cout << endl;
}