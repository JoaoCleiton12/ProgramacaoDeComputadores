#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};
int main()
{
	peixe variavel;
	peixe* varialocado = new peixe;
	cout << "nome: ";
	cin >> varialocado->tipo;
	cout << "peso: ";
	cin >> varialocado->peso;
	cout << "tamanho: ";
	cin >> varialocado->comp;

	cout << varialocado->tipo << " com " << varialocado->peso << "kg e medindo " << varialocado->comp << "cm." << endl;
	delete varialocado;
}