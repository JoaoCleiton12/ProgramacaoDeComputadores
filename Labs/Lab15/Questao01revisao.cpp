#include <iostream>
using namespace std;

int main()
{
	int tam;
	cout << "Digite o tamanho do vetor: ";
	cin >> tam;

	int* vet = new int[tam];
	cout << "criando um vetor para " << tam << " inteiros..." << endl;
	delete [] vet;
}