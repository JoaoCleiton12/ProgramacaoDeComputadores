#include <iostream>
using namespace std;

unsigned char ligarbit(unsigned char, int);
unsigned char desligarbit(unsigned char, int);
bool testarbit(unsigned char, int);

int main()
{
	cout << "digite um caracter: ";
	unsigned char caracter;
	cin >> caracter;
	cout << "testar/ desligar ou ligar qual bit: ";
	int bit;
	cin >> bit;

	cout << "ligar bit: " << bit << " bit ligado: " << ligarbit(caracter, bit) << endl;
	cout << "desligar bit: " << bit << " bit desligado: " << desligarbit(caracter, bit) << endl;
	cout << "o bit esta: " << testarbit(caracter, bit);

}
unsigned char ligarbit(unsigned char n, int n2)
{
	unsigned char mascara = 1 << n2;
	unsigned char m = n | mascara;
	return(m);

}
unsigned char desligarbit(unsigned char n, int n2)
{
	unsigned char mascara = ~(1 << n2);
	unsigned char m = n & mascara;
	return(m);
}
bool testarbit(unsigned char n, int n2)
{
	unsigned char mascara = 1 << n2;
	if (n & mascara)
		return true;
	else
		return false;
}