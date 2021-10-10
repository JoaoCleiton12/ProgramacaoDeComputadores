#include <iostream>
using namespace std;

int main()
{
	
	unsigned int sequencia = 0;
	unsigned int a = 0, b = 1;
	unsigned int soma = 0;
	

	for (int n = 0; n < 4000000; n++)
	{
		sequencia = (a + b);
		if ((sequencia % 2) == 0)
		{
			soma += sequencia;
		}
		
		a = b;
		b = sequencia;
	}
	cout << "soma dos numeros pares: " << soma;

}