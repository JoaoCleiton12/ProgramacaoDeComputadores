#include <iostream>
using namespace std;

struct local
{
	char nome[40];
	char pais[40];
	char continente[40];
};

int main()
{
	int quant;
	cout << "Quantos locais voce deseja visitar? ";
	cin >> quant;
	cin.get();
	local* visitar = new local[quant];

	int i;
	for ( i = 0; i < quant; i++)
	{

		cout << "nome: ";
		cin.getline(visitar[i].nome, 40);
		cout << "pais: ";
		cin.getline(visitar[i].pais, 40);
		cout << "continente: ";
		cin.getline(visitar[i].continente, 30);
		
	}
	
	for (i = 0; i < quant; i++)
	{
		cout << " Local: " << visitar[i].nome << ";  pais: "
			<< visitar[i].pais << ";  continente: "
			<< visitar[i].continente << endl;
	}

	delete[] visitar;
}