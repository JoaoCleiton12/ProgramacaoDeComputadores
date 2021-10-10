#include <iostream>
#include <cmath>
using namespace std;

double tamanhovetor(double, double);

int main()
{
	cout << "digite as coordenadas do vetor:\n";
	cout << "x: ";
	int x, y;
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "o tamanho do vetor e: " << tamanhovetor(x, y) << endl;
}

double tamanhovetor(double n1, double n2)
{
	double m = sqrt(pow(n1, 2) + pow(n2, 2));
	return(m);
}