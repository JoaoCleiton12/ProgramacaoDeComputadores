#include <iostream>
using namespace std;

int main()
{
	int* numero = new int;

	*numero = 100;
	cout << "conteudo apontado: " << *numero << endl;

	cout << "Digite novo valor para esse bloco de memoria: ";
	cin >> *numero;
	cout << "novo conteudo: " << *numero;
	delete numero;
}