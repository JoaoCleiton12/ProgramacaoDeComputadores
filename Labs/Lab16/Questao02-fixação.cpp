#include <iostream>
#include <string>
using namespace std;

struct carros
{
	string fabricante;
	int ano;
};

int main()
{
	int quant;
	cout << "Quantos carros para catalogar?";
	cin >> quant;

	const char* numcarros = new char[quant];

	carros* totalcarro = new carros[quant];
	for (int i = 0; i < quant; i++)
	{
		cout << "Carro#" << i + 1 << endl;
		cout << "Marca: ";
		cin >> totalcarro[i].fabricante;
		cout << "Ano: ";
		cin >> totalcarro[i].ano;
	}

	cout << endl;
	cout << "Aqui esta sua colecao:" << endl;
	for (int i = 0; i < quant; i++)
		cout << totalcarro[i].ano << " " << totalcarro[i].fabricante << endl;
	
	delete[] totalcarro;
}