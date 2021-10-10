#include <iostream>
using namespace std;

template <typename T>
T max5(T vet[]);

int main()
{
	int vet[5] = { 1,2,3,4,5 };
	double vet2[5] = { 6,7,8,8.6,8.9 };
	cout << "maior numero inteiro: " << max5(vet);
	cout << endl;
	cout << "maior numero fracionario: " << max5(vet2);
}

template <typename T>
T max5(T vet[])
{
	T temp = vet[0];
	for (int i = 0; i < 5; i++)
	{
		if (vet[i] > temp)
		{
			temp = vet[i];
		}
	}
	return temp;
}
