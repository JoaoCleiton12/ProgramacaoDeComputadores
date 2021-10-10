#include <iostream>
#include <cmath>
using namespace std;

void funçãoquadrática(int, int, int);

int main()
{
	cout << "Calculo de raizes de uma equacao quadratica!" << endl;
	cout << "digite os valores de a, b e c: \n";
	int a;
	cin >> a;
	int b;
	cin >> b;
	int c;
	cin >> c;

	funçãoquadrática(a, b, c);

}
void funçãoquadrática(int a, int b, int c)
{
	int bAo2 = pow(b, 2);
	int quatroac = (4 * (a * c));
	int delta = bAo2 - quatroac;
	double x1 = (-b + sqrt(bAo2 - quatroac)) / (2 * a);
	double x2 = (-b - sqrt(bAo2 - quatroac)) / (2 * a);

	if (delta >= 0)
	{
		if (x1 == x2)
		{
			cout << "raiz 1 e 2: " << x1 << endl;

		}
		else
		{
			cout << "raiz 1: " << x1 << endl;
			cout << "raiz 2: " << x2 << endl;
		}
	}
	else
	{
		cout << "Nao existe raiz real.\n";
	}

}