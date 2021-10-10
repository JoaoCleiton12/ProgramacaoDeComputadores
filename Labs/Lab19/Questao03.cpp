#include <iostream>
using namespace std;

int main()
{
	int mat[2][3] =
	{
	{1,2,3},
	{4,5,6}
	};

	//irá mostar o primeiro elemento da matriz, ou seja o 1.
	cout << mat[0][0];
	cout << endl;
	//irá mostrar o endereço do primeiro elemento da linha do índice indicado.
	cout << mat[0];
	cout << endl;
	//irá mostrar o endereço o elemento indicado pelos índices.
	cout << &mat[0][0];
}