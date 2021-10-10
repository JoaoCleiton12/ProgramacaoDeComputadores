#include <iostream>
using namespace std;

int main()
{
	char palavras[30];
	int vogal = 0,
		consoante = 0,
		outra = 0;

	cout << "Digite palavras (s para sair):\n";
	cin >> palavras;

	while (!(palavras[0] == 's' && palavras[1] == '\0'))
	{
		if (isalpha(palavras[0])) // caractere é uma letra
		{
			switch (palavras[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vogal++;
				break;
			default: consoante++;
			}
		}
		else  // caractere não é uma letra
			outra++;

		cin >> palavras;
	}
	cout << "Palavras que comecam por vogal " << vogal << endl;
	cout << "Palavras que comecam por consoante " << consoante << endl;;
	cout << "Outras palavras " << outra << endl;

}