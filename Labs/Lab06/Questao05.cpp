#include <iostream>
#include <climits>
using namespace std;

bool isShort(long long);
bool isInt(long long);
int main()
{
	cout << "digite um valor inteiro: ";
	long long valor, variavelShort, variavelInt;
	cin >> valor;
	
	variavelShort = isShort(valor);
	variavelInt = isInt(valor);

	//para ver se cabe em 16 bits
	if (variavelShort == 1)
	{
		cout << valor << " cabe em 16 bits.\n";
	}

	if (variavelShort == 0)
	{
		cout << valor << " nao cabe em 16 bits.\n";
	}

	// para ver se cabe em 32 bits
	if (variavelInt == 1)
	{
		cout << valor << " cabe em 32 bits.\n";
	}

	if (variavelInt == 0)
	{
		cout << valor << " nao cabe em 32 bits\n";
	}
}

bool isShort(long long n)
{
	if (n < SHRT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 
bool isInt(long long n)
{
	if (n < INT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}

}