#include <iostream>
using namespace std;

#define pao 0.30
#define pastel 0.25

int main()
{
	cout << "Pães&Cia\n";
	cout << endl;

	cout << "Quantos paes? ";
	int quantpaes, quantpasteis;
	cin >> quantpaes;

	cout << "Quantos pasteis? ";
	cin >> quantpasteis;
	

	cout << "O total das compras e R$" << (quantpaes * 0.30) + (quantpasteis * 0.25) << endl;
}