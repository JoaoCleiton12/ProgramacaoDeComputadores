#include <iostream>
using namespace std;

int  bitsbaixo(unsigned int);
bool testarbit(unsigned short n1, int n2);

int main()
{
	cout << "digite um valor inteiro: ";
	unsigned int valor;
	cin >> valor;
	unsigned short valor1 = 1259;
	unsigned short valor2 = 168;
	cout << "os 16 bits mais baixos desse valor correspondem ao numero: " << endl;
	int exemplo = testarbit(valor1, 9);
	cout << exemplo << endl;
}
int  bitsbaixo(unsigned int n)
{
	unsigned short mascara = ~0;

	unsigned int valorrecebido = n;
	valorrecebido = valorrecebido & mascara;
	return(valorrecebido);

}
bool testarbit(unsigned short n1, int n2)
{
	unsigned short mascara = 1 << n2;
	if (n1 & mascara)
		return true;
	else
		return false;
}