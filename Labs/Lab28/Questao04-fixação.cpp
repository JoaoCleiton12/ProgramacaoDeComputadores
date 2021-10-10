#include <iostream>
using namespace std;

struct par { int x; int y; };

void calcular(const par& val, int& so, int& multi);

int main()
{
	par valores;
	cout << "digite um par de valores:\n";
	cin >> valores.x >> valores.y;
	int soma = 0;
	int multi = 0;
	calcular(valores, soma, multi);
	cout << "Soma: " << soma << endl;
	cout << "Multiplicacao: " << multi << endl;
}
void calcular(const par& val, int& so, int& multi)
{
	so = (val.x + val.y);
	multi = (val.x * val.y);
}
