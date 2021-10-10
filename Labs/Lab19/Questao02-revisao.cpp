#include <iostream>
using namespace std;

void exibirtrans(int mt[2][3]);

int main()
{
	int mat[3][2];
	int mattrans[2][3];
	cout << "digite uma matriz 3x2:\n";
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 2; k++)
			cin >> mat[i][k];
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 2; k++)
			mattrans[k][i] = mat[i][k];
	exibirtrans(mattrans);
}
void exibirtrans(int mt[2][3])
{
	for (int i = 0; i < 2; i++)
	{
		for (int k = 0; k < 3; k++)
			cout << mt[i][k] << " ";
		cout << endl;
	}
}