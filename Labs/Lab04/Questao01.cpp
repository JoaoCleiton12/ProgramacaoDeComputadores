#include <iostream>]
#include <cmath>
using namespace std;

int main()
{
	cout << "Ponto P: \n";
	double pontoPx, pontoPy;
	cin >> pontoPx;
	cin >> pontoPy;

	cout << "Ponto Q: \n";
	double pontoQx, pontoQy;
	cin >> pontoQx;
	cin >> pontoQy;

	double pontosx, pontosy, raiz, potencia;
	pontosx = pontoPx - pontoQx;
	pontosy = pontoPy - pontoQy;

	potencia = pow(pontosx, 2) + pow(pontosy, 2);
	raiz = sqrt(potencia);

	cout << "distancia entre P e Q: " << raiz << endl;
}