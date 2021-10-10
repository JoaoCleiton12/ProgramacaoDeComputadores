#include <iostream>
using namespace std;

unsigned short ligarbit(unsigned short n1, int n2);
unsigned short cruzamentodepontounico(unsigned short n1);

int main()
{
    unsigned short valor1 = 25000;
    unsigned short valor2 = 50000;
    cout << "a funcao retorna o numero: " << cruzamentodepontounico(valor1);
}

unsigned short ligarbit(unsigned short n1, int n2)
{
	int bit = n2;
	if (bit == 0)
	{
		unsigned short mascara = 1;
		unsigned short valorretonado = n1;
		valorretonado = valorretonado & mascara;
		return(valorretonado);
	}

	else
	{
		unsigned short mascara = 1 << bit;
		unsigned short valorretonado = n1;
		valorretonado = valorretonado & mascara;
		return(valorretonado);
	}

}


unsigned short cruzamentodepontounico(unsigned short n1)
{
	/* usando essa mascara com 8 bits iguais a 1, quando realizar a operação de os bits
caminhar 8 bits para a direita, ou seja eles vão se tornar os 8 primeiros bits do numero,
e depois de realizar a operação and os 8 novos primeiros bits do primeiro numero recebido
será copiado e os 8 restantes, ou seja os bits zerados não, quando o valor for armazenado
em uma variavel de 16 bits, os 8 primeiros bits serão iguais aos 8 bits originalmente de
mais alta ordem do primeiro numero recebido(que se tornaram os 8 de mais baixa ordem)
e os 8 bits restantes serão iguais a 0.*/
	unsigned short valor1 = n1;
	
	int bit1 = 0;
	int bit2 = 1;
	int bit3 = 2;
	int bit4 = 3;
	int bit5 = 4;
	int bit6 = 5;
	int bit7 = 6;
	int bit8 = 7;

	unsigned short v1 = ligarbit(valor1, bit1);
	unsigned short v2 = ligarbit(valor1, bit2);
	unsigned short v3 = ligarbit(valor1, bit3);
	unsigned short v4 = ligarbit(valor1, bit4);
	unsigned short v5 = ligarbit(valor1, bit5);
	unsigned short v6 = ligarbit(valor1, bit6);
	unsigned short v7 = ligarbit(valor1, bit7);
	unsigned short v8 = ligarbit(valor1, bit8);
	unsigned short valores1 = (((v1 & v2) & (v3 & v4)) & ((v5 & v6) & (v7 & v8)));
	return(valores1);
}
