#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com a distância em metros: ";
	int distancia;
	cin >> distancia;

	int distanciakm = distancia / 1000;
	int distanciametro = distancia % 1000;

	cout << distancia << " metros equivalem a " << distanciakm << " quilometros e " << distanciametro << " metros." << endl;
}