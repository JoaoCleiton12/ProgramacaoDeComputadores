#include <iostream>
using namespace std;

int main()
{
	float custofabrica, custodistribuidor, custoimpostos, custototal;
	cout << "O custo de fabrica: ";
	cin >> custofabrica;

	custodistribuidor = custofabrica * 0.28;
	custoimpostos = custofabrica * 0.45;

	custototal = custodistribuidor + custoimpostos + custofabrica;

	cout << "custo ao consumidor: " << custototal <<endl;

}