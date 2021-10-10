#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

float tiposdepeixes(peixe* tipospeixes);
int main()
{
	int tam;
	cout << "tamanho do vetor: ";
	cin >> tam;

	cout << endl;

	peixe* tipospeixes = new peixe[tam];


	cout << "O peso do peixe e " << tiposdepeixes(tipospeixes) << " gramas." << endl;

	delete[] tipospeixes;
}
float tiposdepeixes(peixe* tipospeixes)
{
	cout << "tipo: ";
	cin >> tipospeixes[0].tipo;

	cout << "peso: ";
	cin >> tipospeixes[0].peso;

	cout << "tamanho: ";
	cin >> tipospeixes[0].comp;

	cout << endl;
	return(tipospeixes->peso);
}