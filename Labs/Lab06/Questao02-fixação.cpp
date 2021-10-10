#include <iostream>
using namespace std;

int main()
{
	cout << "distancia percorrida em km: ";
	int quilometro;
	cin >> quilometro;
	cout << "litros de combustivel: ";
	int litros;
	cin >> litros;
	
	int kmporlitro;
	kmporlitro = quilometro / litros;

	cout << "O consumo do seu carro foi de " << kmporlitro << " kn/litro.\n";
	
}