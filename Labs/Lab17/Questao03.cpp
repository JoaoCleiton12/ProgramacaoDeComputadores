#include <iostream>
using namespace std;

void numeros(int , int );

int main()
{
	int num1, num2;
	cout << "que numeros vao ser o inicio e o fim do intervalo? ";
	cin >> num1 >> num2;
	numeros(num1, num2);
}
void numeros(int n, int m)
{
	int soma = 0;
	for (int i = n; i <= m; i++)
	{
		soma += i;
	}
	cout << "soma dos numeros no intervalo: " << soma;
}