#include <iostream>
using namespace std;

float aumentosalario(float);

int main()
{
	cout << "salario atual:R$ ";
	float salario;
	cin >> salario;
	
	cout << "salario ajustado:R$ " << aumentosalario(salario) << endl;
}

float aumentosalario(float n)
{
	float m = (0.15 * n) + n;
	return(m);
}