#include <iostream>

using namespace std;

void exibirbit(unsigned char);
bool testarbit(unsigned char, int);

int main()
{

	cout << "digite um valor entre 0 e 255: ";
	unsigned int valor;
	cin >> valor;
	int valo1 = valor;


	cout << "O numero " << valor << " em binario e ";
	exibirbit(valor);

}

void exibirbit(unsigned char n)
{
	
	unsigned char valorrecebido = n;
	
	int bit1 = 1;
	int bit2 = 2;
	int bit3 = 3;
	int bit4 = 4;
	int bit5 = 5;
	int bit6 = 6;
	int bit7 = 7;

	
	cout << testarbit(valorrecebido, bit7);
	cout << testarbit(valorrecebido, bit6);
	cout << testarbit(valorrecebido, bit5);
	cout << testarbit(valorrecebido, bit4);
	cout << testarbit(valorrecebido, bit3);
	cout << testarbit(valorrecebido, bit2);
	cout << testarbit(valorrecebido, bit1);
	cout << testarbit(valorrecebido, 0);

	
	
}
		

bool testarbit(unsigned char n, int n2)
{
	unsigned char mascara = 1;

	if (n & (mascara << n2))
		return 1;
	else
		return 0;

}