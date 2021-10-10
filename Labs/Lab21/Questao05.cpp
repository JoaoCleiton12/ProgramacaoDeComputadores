#include <iostream>
using namespace std;

int main()
{
	int num = 2;
	int i = 2;
	for (int k = 0; k < 10; k++)
	{
		if (num > 2)
		{
			if (num % 2 == 0)
			{
				cout << endl;
			}
			if (((num % 1 == 0) & (num % num == 0)))
			{
					cout << num << " e um numero primo.\n";
			}
			
		}
		if (num <= 2)
		{
			cout << num << " e um numero primo.\n";
		}
		num++;
		i++;
	}
}