#include <iostream>
using namespace std;

int main()
{
	char nome1[15];
	char nome2[15];

	cout << "Digite seu nome e sobrenome: ";
	cin >> nome1;
	cin >> nome2;

	cout << "Bom dia senhor, " << nome2 <<
		". Ou devo chama-lo de " << nome1 << "?" << endl;
}