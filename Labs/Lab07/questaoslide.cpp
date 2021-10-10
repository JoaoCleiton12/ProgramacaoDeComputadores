#include <iostream>
using namespace std;

int main()
{
	int bit;
	cout << "ligar qual bit: ";
	cin >> bit;
	unsigned char mascara = 1 << bit;

	unsigned char estado = 146;
	estado = (estado | mascara);

	cout << endl;
	cout << int(estado);
}