#include <iostream>
using namespace std;

int main()
{
	int idade;
	int quant = 0;
	cout << "digite as idades do grupo:\n";
	cin >> idade;
	int idadenova = idade;
	int idadevelha = idade;
	do
	{
		if (idade >= 18)
		{
			quant++;
		}
		cin >> idade;
		if ((idadenova > idade) & (idade != 0))
		{
			idadenova = idade;
		}
		if ((idadevelha < idade))
		{
			idadevelha = idade;
		}

	} while (idade != 0);
	cout << "Nesse grupo " << quant << " pessoas sao maiores de idade." << endl;
	cout << "Pessoa mais nova: " << idadenova << endl;
	cout << "Pessoa mais nova: " << idadevelha << endl;
}