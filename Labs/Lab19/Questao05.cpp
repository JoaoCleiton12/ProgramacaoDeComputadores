#include <iostream>
using namespace std;

int main()
{
	int k = 0;
	char mat[16][16];
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			mat[j][i] = 0 + k;
			k++;
		}
	}

	
	int x, y, z, w;
	cout << "entre com as coordenadas da regiao de interesse:\n";
	cout << "De: "; 
	cin >> x;
	cin >> y;
	cout << "Ate: ";
	cin >> z;
	cin >> w;
	char ** matdina= new char*[z-x+1];
	for(int i = 0; i < z-x; i++)
		matdina[i] = new char[w-y+1];

	
	int i, j;
	int m, n;
	for (i = x, m = 0;m <= z- x; m++)
	{
		for (j = y, n = 0; n <= w - y; m++)
		{
			matdina[m][n] = mat[i][j];
			++j;
		}
		++i;
	}



	for (int i = 0; i < x- z; ++i)
	{
		for (int j = 0; j < y - w; ++j)
			cout << matdina[i][j] << " ";
		cout << endl;
	}


		for (int i = 0; i < z; ++i)
			delete[] matdina[i];
		delete[] matdina;

	
	
}