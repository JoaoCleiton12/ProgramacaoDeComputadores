#include <iostream>
using namespace std;

int main()
{
	double daiane = 100;
	double celia = 100;
	int quantanos = 0;

	while (celia <= daiane)
	{
		celia += 0.05 * celia;
		daiane += 10;
		++quantanos;
	}

	cout << "Se passaram " << quantanos << " anos para os saldos atingirem os valores" << endl;
	cout << "Daiane: " << daiane << endl;
	cout << "Celia : " << celia << endl;
}