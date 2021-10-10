#include <iostream>
using namespace std;

int main()
{
	char ch = '$';
	for (int i = 0; i < 1; i++)
	{
		cout << "    " << ch << endl; //4 espaços para o primeiro ficar centralizado
		cout << "   "; //3 espaços para o segundo ficar centralizado
		for (int i = 0; i < 3; i++)
		{
			cout << ch;
		}
		cout << endl;
		cout << "  ";//2 espaços para o terceiro ficar centralizado
		for (int i = 0; i < 5; i++)
		{
			cout << ch;
		}
		cout << endl;
		cout << " ";//1 espaços para o quarto ficar centralizado
		for (int i = 0; i < 7; i++)
		{
			cout << ch;
		}
		cout << endl;//todos todos acima ficam centralizados de acordo com o quinto
		for (int i = 0; i < 9; i++)
		{
			cout << ch;
		}
	}
}