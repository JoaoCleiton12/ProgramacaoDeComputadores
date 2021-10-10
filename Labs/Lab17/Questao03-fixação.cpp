#include <iostream>
using namespace std;

int main()
{
	char palindromo[30];
	cout << "digite uma palavra: ";
	cin >> palindromo;
	char palavranova[30];
	int i = 0;
	int tam = strlen(palindromo);
	for (i = 0; i < tam; i++)
	{
		palavranova[i] = palindromo[tam - i - 1];
	}
	palavranova[tam] = '\0';
	cout << "palavra invertida: " << palavranova << endl;
	if (strcmp(palindromo, palavranova))
		cout << "A palavra nao e um palindromo\n";
	else
		cout << "A palavra e um palindromo\n";
	cout << endl;
}