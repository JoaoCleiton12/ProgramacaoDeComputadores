#include <iostream>
using namespace std;

int main()
{
	char frase[60];
//coloquei sem espaço entre as palavras por que no enunciada falava
//para desconsiderar os espaços.
	cout << "digite uma frase(sem espaco entre as palavras): ";
	cin >> frase;
	char fraseinversa[60];
	int i = 0;
	int tam = strlen(frase);
	for (i = 0; i < tam; i++)
	{
		fraseinversa[i] = frase[tam - i - 1];
	}
	fraseinversa[tam] = '\0';
	cout << "palavra invertida: " << fraseinversa << endl;
	if (strcmp(frase, fraseinversa))
		cout << "A frase nao e um palindromo\n";
	else
		cout << "A frase e um palindromo\n";
	cout << endl;
}