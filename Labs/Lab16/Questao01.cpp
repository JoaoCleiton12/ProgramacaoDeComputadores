#include <iostream>
using namespace std;

int main()
{
	char jogador[30];
	cout << "Digite jogador/time:";
	cin >> jogador;
	char* pontei = &jogador[30];

	for (int i = 0; i < 30; i++)
	{
		if (jogador[i] == '/')
		{
			pontei = &jogador[i+1];
		}
	}
	int tam = 0;
	int q = 0;
	while (jogador[q] != '/')
	{
		q++;
		tam++;
	}
	
	cout << "O nome do jogador tem " << tam << " letras" << endl;
	cout << "O seu time e o " << pontei;

}