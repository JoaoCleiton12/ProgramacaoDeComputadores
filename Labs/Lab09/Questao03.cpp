#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cout << "Digite um numero real: ";
	float numeroreal;
	cin >> numeroreal;

	int quociente = (numeroreal / 1);
	double resto = (numeroreal / 1) - quociente;

	cout << "Parte inteira: "<< quociente << endl;
	cout << "Parte fracionaria: " << resto << endl;
}