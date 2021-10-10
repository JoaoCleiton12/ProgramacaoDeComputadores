#include <iostream>
using namespace std;

int main()
{
	int donativos[10];
	int k = 0;
	int j;
	cout << "Digite ate 10 valores de donativos (zero para encerrar):\n";
	for (int i = 10, j = 0; i > 0; i--, j++)
	{
		cin >> donativos[j];
		k++;
	}
	int soma = 0;
	for (int i = 0; i < k; i++)
	{
		soma += donativos[i];
	}
	int media = soma / k;
	int h = 0;
	for(int i = 0; i < k; i++)
	{
		if (donativos[i] > media)
		{
			h++;
		}
	}

	cout << "A media dos valores doados foi de R$ " << media << " reais;\n";
	cout << h << " valores foram maiores que a media." << endl;
}