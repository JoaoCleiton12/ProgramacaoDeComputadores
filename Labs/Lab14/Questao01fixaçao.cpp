#include <iostream>
using namespace std;
int main()
{
	int x, *p, **q;

	x = 10;
	p = &x;
	q = &p;


	cout << **q << endl; // est� mostrando o n�mero 10
}