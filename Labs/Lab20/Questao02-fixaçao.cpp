#include <iostream>
using namespace std;

int soma(int a, int b, int c);

int main()
{
	int a, b, c;
	cout << "Digite tres numeros inteiros a, b e c (\"a\" maior que 1):";
	cin >> a >> b >> c;
	cout << "a soma e igual a " << soma(a, b, c) << endl;
}
int soma(int a, int b, int c)
{
	int somatemp = 0;
	if (b < c)
	{
		for (int i = b; i <= c; i++)
		{
			if (b % a == 0)
			{
				somatemp += b;
			}
		}
	}
	if (b > c)
	{
		for (int i = c; i <= b; i++)
		{
			if (c % a == 0)
			{
				somatemp += b;
			}
		}
	}

	return somatemp;
}