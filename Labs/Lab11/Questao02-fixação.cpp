#include <iostream>
using namespace std;

int main()
{
	char nome[15];
	cout << "Qual e o nome? ";
	cin.getline(nome, 15);

	cout << endl;

	char conceito;
	cout << "Que conceito voce merece ?";
	cin >> conceito;

	char novoconceito = conceito + 1;
	cout << endl;

	cout << "Bom dia " << nome << " seu conceito e " << novoconceito << "." << endl;
}