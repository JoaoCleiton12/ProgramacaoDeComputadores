#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char palavra[20];
	int totalpalavras = 0;
	cout << "Digite palavras (pronto para parar):\n";
	cin >> palavra;
	while (strcmp(palavra, "pronto"))
	{
		totalpalavras++;
		cin >> palavra;
	}
	cout << "foram digitadas um total de " << totalpalavras << " palavras\n";
}