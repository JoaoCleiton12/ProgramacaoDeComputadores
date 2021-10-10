#include <iostream>
using namespace std;

template <typename T>
T maxn(T vet[], int num);

int main()
{
	int vet1[6] = { 12, 5, 87, 11, 51, 52 };
	double vet2[4] = { 4.1, 7.9, 123.8, 123.4 };
	cout << "maior numero inteiro: " << maxn(vet1, 6);
	cout << endl;
	cout << "maior numero fracionario: " << maxn(vet2, 4);
} 

template <typename T>
T maxn(T vet[], int num)
{
	T temp = vet[0];
	for (int i = 0; i < num; i++)
	{
		if (vet[i] > temp)
		{
			temp = vet[i];
		}
	}
	return temp;
}