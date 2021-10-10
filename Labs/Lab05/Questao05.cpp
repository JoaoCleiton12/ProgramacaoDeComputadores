#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double angulograus(double, double);

int main()
{
	cout << "digite as coordenadas do vetor:\n";
	cout << "X: ";
	double x, y;
	cin >> x;
	cout << "Y: ";
	cin >> y;
	
	cout << "o angulo do vetor e " << angulograus(y, x) << " graus.\n";
}

double angulograus(double n1, double n2)
{
	double m = (atan2(n1, n2) * 180) / (M_PI);
	return(m);
 }