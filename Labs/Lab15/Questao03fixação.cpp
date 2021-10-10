#include <iostream>
using namespace std;

struct tipocarro
{
	char modelo[20];
	int anofabri;
	float preco;
};

int main()
{
	tipocarro carros[10] =
	{
		{"Vectra", 2007, 58000},
		{"Polo", 2009, 45000}
	};

	tipocarro* pontei = &carros[1];

	cout << pontei->modelo << " " << pontei->anofabri << " R$" << pontei->preco << endl;

}