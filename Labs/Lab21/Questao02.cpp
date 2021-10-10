#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Digite numero inteiro maior que 0: ";
	cin >> num;
	int i;
	int j = 0;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			j++;
		}
	}
	if (j == 0)
	{
		cout << num << " e um numero primo.\n";
	}
	else
	{
		cout << num << " nao e um numero primo.\n";
	}
}