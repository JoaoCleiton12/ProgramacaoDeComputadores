#include <iostream>
using namespace std;

struct peixe
{
	string nome;
	float peso;
	int tamanho;
};

int main()
{
	peixe tilapia = { "tilapia", 6.5, 20 };
	peixe* pont = &tilapia;

	cout << pont->nome << " " << pont->tamanho << "cm " << pont->peso << "kg." << endl;
}