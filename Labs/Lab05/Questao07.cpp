#include <iostream>
#include <cmath>
using namespace std;

double numeroaoquadrado(double);
double numeroaocubo(double);


int main()
{
	cout << "Digite um valor: ";
	double valor;
	cin >> valor;

	cout << endl;
	cout << endl;

	cout << "Quadrado: " << numeroaoquadrado(valor) << endl;
	cout << "Cubo: " << numeroaocubo(valor) << endl;
	cout << "Cubo do quadrado: " << numeroaocubo(numeroaoquadrado(valor)) << endl;
}

double numeroaoquadrado(double n1)
{
	double m = pow(n1, 2);
	return(m);
}

double numeroaocubo(double n1)
{
	double m = pow(n1, 3);
	return(m);
}