#include <iostream>
using namespace std;

int main()
{
	int mat[2][3] =
	{
	{1,2,3},
	{4,5,6}
	};

	//ir� mostar o primeiro elemento da matriz, ou seja o 1.
	cout << mat[0][0];
	cout << endl;
	//ir� mostrar o endere�o do primeiro elemento da linha do �ndice indicado.
	cout << mat[0];
	cout << endl;
	//ir� mostrar o endere�o o elemento indicado pelos �ndices.
	cout << &mat[0][0];
}