#include <iostream>
using namespace std;

char fun��oavalia��o(char n[]);

int main()
{
	char nome[20];
	cout << "Digite uma palavra: ";
	cin >> nome;

	cout << "Em " << nome << "a ultima letra e " << fun��oavalia��o(nome);
}
char fun��oavalia��o(char n[])
{
	
	int ultimaletra = strlen(n) - 1;
	return n[ultimaletra];
}