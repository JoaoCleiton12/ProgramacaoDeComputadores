#include <iostream>
using namespace std;

int main()
{
	int soma = 0;
	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3 == 0))
		{
			soma += i;
		}
		if (((i % 5) == 0))
		{
			soma += i;
		}
	}
	cout << "Soma dos multiplos: " << soma << endl;
}