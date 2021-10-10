#include <iostream>
using namespace std;

int main()
{
	char vet[10] = { "bola10" };
	for (int i = 0; i < 10; i++)
	{
		cout << vet[i];
	}
	cout << vet[0] << vet[1] << vet[2] << vet[3] << vet[4] << vet[5];
}