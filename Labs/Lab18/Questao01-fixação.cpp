#include <iostream>
using namespace std;

int main()
{
	int num;
	int soma = 0;
	cout << "digite numeros inteiros (0 para finalizar):\n";
	
	do
	{
		cin >> num;
		soma += num;
	
		cout << "Soma parcial: " << soma;
		cout << endl;
		
	} 
	while (num != 0);
	cout << endl;
}