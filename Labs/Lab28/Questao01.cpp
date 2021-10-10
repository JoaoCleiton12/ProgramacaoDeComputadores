#include <iostream>
using namespace std;

float& tempovolta(float n, float& acumu);

int main()
{
	float tempo, temtotal = 0;
	float& acumulado = temtotal;
	cout << "Volta: ";
	while (cin >> tempo)
	{
		cout << "Tempo total = " << tempovolta(tempo, acumulado) << endl; 
		cout << "Volta: ";
	}
}
float & tempovolta(float n, float & acumu)
{	
	acumu += n;
	return acumu;
}