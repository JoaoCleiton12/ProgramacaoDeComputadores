#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "digite um angulo: ";
	double angulo;
	cin >> angulo;

	double rad;
	rad = angulo * M_PI / 180;

	double seno;
	seno = sin(rad);

	cout << "o seno = " << seno << endl;

}