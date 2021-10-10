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
	int tam;
	cout << "tamanho do vetor: ";
	cin >> tam;

	cout << endl;

	peixe* tipospeixes = new peixe[tam];

	cout << "tipo: ";
	cin >> tipospeixes[0].tipo;

	cout << "peso: ";
	cin >> tipospeixes[0].peso;

	cout << "tamanho: ";
	cin >> tipospeixes[0].comp;

	cout << endl;

	cout << " o peso do peixe e " << tipospeixes[0].peso << " gramas." << endl;

	delete [] tipospeixes;
}