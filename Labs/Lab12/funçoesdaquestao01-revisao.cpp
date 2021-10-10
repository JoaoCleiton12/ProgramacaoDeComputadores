#include "cabeçalhodasfunçoesdaquestao01.h"

complexos soma(complexos n1, complexos n2)
{
	complexos temp;
	temp.real = (n1.real + n2.real);
	temp.img = (n1.img + n2.img);

	return(temp);
}

complexos multipli(complexos n1, complexos n2)
{
	complexos temp2;
	temp2.real = ((n1.real * n2.real) - (n1.img * n2.img));
	temp2.img = ((n1.img * n2.real) + (n2.img * n1.real));

	return(temp2);
}

void exibir(complexos n1)
{
	cout << n1.real;
	cout << showpos;
	cout << n1.img;
	cout << noshowpos;
	cout << "i";
}

complexos ler()
{
	//3+2i

	complexos temp3;
	cin >> temp3.real;
	cin >> temp3.img;
	//cin.ignore(); é usado para descartar a letra i que não vai ser armazenada na variavel
	//tambem podia usar o cin.get();
	cin.ignore();

	return(temp3);
}