#include "cabeçalhodasfunçoesdaquestao02.h"

complexos operator+(complexos n1, complexos n2)
{
	complexos temp;
	temp.real = (n1.real + n2.real);
	temp.img = (n1.img + n2.img);

	return(temp);
}

complexos operator*(complexos n1, complexos n2)
{
	complexos temp2;
	temp2.real = ((n1.real * n2.real) - (n1.img * n2.img));
	temp2.img = ((n1.img * n2.real) + (n2.img * n1.real));

	return(temp2);
}

ostream& operator<<(ostream& os, complexos &n1)
{
	os << n1.real;
	os << showpos;
	os << n1.img;
	os << noshowpos;
	os << "i";

	return(os);
}

istream& operator>>(istream& is, complexos &temp3)
{
	cin >> temp3.real;
	cin >> temp3.img;
	//cin.ignore(); é usado para descartar a letra i que não vai ser armazenada na variavel
	//tambem podia usar o cin.get();
	cin.ignore();

	return(is);
}