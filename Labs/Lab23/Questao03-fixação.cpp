#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("caracteres.txt");
	if (!fin.is_open())
	{
		cout << "A abertura do arquivo falhou!" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}


	char ch;
	int vogais = 0, consoantes = 0, outros = 0;
	fin.get(ch);
	while (!fin.eof())
	{
		if (isalpha(ch))
		{
			switch (ch)
			{
				case 'a': vogais++; break;
				case 'e': vogais++; break;
				case 'i': vogais++; break;
				case 'o': vogais++; break;
				case 'u': vogais++; break;
				case 'A': vogais++; break;
				case 'E': vogais++; break;
				case 'I': vogais++; break;
				case 'O': vogais++; break;
				case 'U': vogais++; break;
				default: consoantes++;
			}
		}
		else
		{
			outros++;
		}
		fin.get(ch);
	}

	cout << "vogais: " << vogais << endl;
	cout << "consoantes: " << consoantes << endl;
	cout << "Outros: " << outros << endl;

	fin.close();
}