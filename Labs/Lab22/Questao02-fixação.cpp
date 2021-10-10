#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	cout << "Digite seu texto (@ para sair): ";
	cin.get(ch);


	while (ch != '@')
	{
		if (!isdigit(ch))
		{
			if (islower(ch))
				ch = toupper(ch);
			else
				ch = tolower(ch);
			cout << ch;
		}
		cin.get(ch);
	}

	cout << endl;
}