#include <iostream>
using namespace std;

int funçãovetor(int vet[]);

int main()
{
	cout << "Digite 5 valores: \n";
	int valores[5];
	cin >> valores[0];
	cin >> valores[1];
	cin >> valores[2];
	cin >> valores[3];
	cin >> valores[4];

	cout << "A soma do vetor e " << funçãovetor(valores) << "." << endl;
}
int funçãovetor(int vet[])
{
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}