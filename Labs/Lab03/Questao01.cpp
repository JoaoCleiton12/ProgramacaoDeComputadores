#include <iostream>
using namespace std;

int main()
{
	cout << "A quantos anos voce fuma? ";
	float anos, dias;
	cin >> anos;

	dias = anos * 365;

	cout << "Quantos cigarros voce fuma por dia? ";
	float cigarrosPdia, totalcigarros, totalmacos;
	cin >> cigarrosPdia;

	totalcigarros = cigarrosPdia * dias;

	totalmacos = totalcigarros / 20;

	cout << "Qual o preco medio de uma carteira de cigarros? ";
	float precocigarro, precototal;
	cin >> precocigarro;


	precototal = totalmacos * precocigarro;

	cout << "Voce gastou ate agora " << precototal << " com cigarros." << endl;
}