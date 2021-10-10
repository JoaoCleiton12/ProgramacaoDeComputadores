#include <iostream>
using namespace std;

short bitsalto(unsigned short);

int main()
{
	cout << "digite um valor inteiro: ";
	unsigned short valor;
	cin >> valor;
	cout << "os 16 bits mais altos desse valor correspondem ao numero: " << bitsalto(valor) << endl;
}
short bitsalto(unsigned short n)
{
	unsigned char mascara = ~0;

	unsigned short valorrecebido = n;
	valorrecebido = (valorrecebido >> 8) & mascara;
	
	unsigned char mascara2 = ~0;
	unsigned short valorrecebido2 = 50000;
	valorrecebido2 = valorrecebido2 & mascara2;

	unsigned short valorfinal;
	valorfinal = ((valorrecebido << 8) | valorrecebido2);
	
	
	return(valorfinal);


}