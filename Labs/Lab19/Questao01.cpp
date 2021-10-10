#include <iostream>
using namespace std;

int main()
{
	int mat[4][4] =
	{
		{3,1,5,5},
		{1,5,5,6},
		{2,3,4,5},
		{4,9,1,8}
	};
	int somacol1 = 0; 
	int somacol2 = 0;
	int somacol3 = 0;
	int somacol4 = 0;
	//soma da primeira coluna
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 1; j++)
			somacol1 += mat[i][j];
	}
	//soma da segunda coluna
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 2; j++)
			somacol2 += mat[i][j];
	}
	//soma da terceira coluna
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j < 3; j++)
			somacol3 += mat[i][j];
	}
	//soma da quarta coluna
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j < 4; j++)
			somacol4 += mat[i][j];
	}
	
	cout << "A soma das colunas e: " << somacol1 << " "
		<< somacol2 << " " << somacol3 << " " << somacol4 << " " << endl;
}