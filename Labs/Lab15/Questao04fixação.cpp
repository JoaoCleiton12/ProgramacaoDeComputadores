#include <iostream>
using namespace std;

struct tipocarro
{
	char modelo[20];
	int anofabri;
	float preco;
};

void valorototalcarros(tipocarro* carros);
int main()
{
	tipocarro* carros = new tipocarro[10];

	cout << "entre com os dados de dois carros:\n";
	cin >> carros[0].modelo >> carros[0].anofabri >> carros[0].preco;
	cin >> carros[1].modelo >> carros[1].anofabri >> carros[1].preco;

	cout << "valor total do precos dos carros e: R$";
	valorototalcarros(carros);
	cout << endl;

	delete[] carros;
}
void valorototalcarros(tipocarro* carros)
{
	cout << carros[0].preco + carros[1].preco;
}