#include <iostream>
using namespace std;

int main()
{
	int carros[10];
	cout << "As ultimas 10 velocidades registradas :\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> carros[i];
	}
	int quant = 0;
	int multatotal = 0;
	for (int i = 0; i < 10; i++)
	{
		if (carros[i] > 80)
		{
			quant++;
			int diferenca = carros[i] - 80;
			int multa = diferenca * 8;
			multatotal += multa;
			cout << carros[i] << " Km/h excede o limite = multa de R$" << multa << endl;
		}
	}
	cout << endl;
	cout << quant << " carros foram multados em um valor total de R$" << multatotal << endl;
}