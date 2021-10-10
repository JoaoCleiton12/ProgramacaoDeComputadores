#include <iostream>
using namespace std;

char funçãoavaliação(char n[]);

int main()
{
	char nome[20];
	cout << "Digite uma palavra: ";
	cin >> nome;

	cout << "Em " << nome << "a ultima letra e " << funçãoavaliação(nome);
}
char funçãoavaliação(char n[])
{
	
	int ultimaletra = strlen(n) - 1;
	return n[ultimaletra];
}