#include <iostream>
using namespace std;

int fun��ovetor(int vet[]);

int main()
{
	cout << "Digite 5 valores: \n";
	int valores[5];
	cin >> valores[0];
	cin >> valores[1];
	cin >> valores[2];
	cin >> valores[3];
	cin >> valores[4];

	cout << "A soma do vetor e " << fun��ovetor(valores) << "." << endl;
}
int fun��ovetor(int vet[])
{
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}