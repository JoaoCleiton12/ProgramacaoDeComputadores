#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Digite um texto (# para finalizar):\n";
	cin.get(ch);
	int quant = 0;
	while (ch != '#')
	{
		if (ch == '!')
		{
			quant++;
			ch = '!';
			cout << ch;
		}
		if (ch == '.')
		{
			quant++;
			ch = '!';
		}
		cout << ch;
		cin.get(ch);
	}
	cout << endl;
	cout << "Substituicoes: " << quant << endl;
}