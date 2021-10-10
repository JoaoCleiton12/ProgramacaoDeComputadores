#include <iostream>
using namespace std;

char charada(char, int);

int main()
{
	char ch, ch2, ch3, ch4, ch5;
	ch = '<' ;
	ch2 = '\a';
	ch3 = '(';
	ch4 = '5';
	ch5 = '\1';

	int numero, numero2, numero3, numero4, numero5;
	numero = 20;
	numero2 = 90;
	numero3 = 72;
	numero4 = 48;
	numero5 = 107;


	cout << charada(ch, numero);
	cout << charada(ch2, numero2);
	cout << charada(ch3, numero3);
	cout << charada(ch4, numero4);
	cout << charada(ch5, numero5);

}
char charada(char n1, int n2)
{
	char m = n1 + n2;
	return(m);

}