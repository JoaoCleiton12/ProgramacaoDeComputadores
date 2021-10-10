#include <iostream>
using namespace std;

int main()
{
	int numlinhas;
	cout << "entre com o numero de linhas: ";
	cin >> numlinhas;
	for (int i = 1; i <= numlinhas; i++)
	{
		for (int j = 1; j <= (numlinhas - i); j++)
			{
				cout << ".";
			}
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}