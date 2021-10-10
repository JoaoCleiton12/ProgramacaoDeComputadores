#include <iostream>
using namespace std;

int main()
{
	int num, num2;
	cout << "Digite um numero inteiro: ";
	cin >> num;
	cout << "Digite outro numero inteiro: ";
	cin >> num2;

	// primeiro numero > segundo numero
	if (num > num2)
	{
		int temp = num2;
		int soma = 0;
		while(temp < num)
		{
			soma += temp;
			temp++;
		}
		cout << "A soma de todos os valores entre " << num << " e " << num2 << ": " << soma - num2 << endl;
	}

	
	// segundo numero > primeiro numero
	if (num < num2)
	{
		int temp2 = num;
		int soma2 = 0;
		while (temp2 < num2)
		{
			soma2 += temp2;
			temp2++;
		}
		cout << "A soma de todos os valores entre " << num << " e " << num2 << ": " << soma2 - num << endl;
	}

	//os dois iguais
	if (num == num2)
	{
		cout << "nao existe soma entre os valores, pois os valores sao iguais.\n";
	}
	
}