#include <iostream>
#include "cabeçalhofunçãoquestao06.h"
using namespace std;


int main()
{
	cout << "Digite as coordenadas do vetor:\n";
	double x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	cout << "as coordenadas polares do vetor sao: \n" << "(" << tamanhovetor(x, y) << ", " << angulograus(y, x) << ")\n";
}
