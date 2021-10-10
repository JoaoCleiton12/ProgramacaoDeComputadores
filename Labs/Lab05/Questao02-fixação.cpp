#include <iostream>
using namespace std;

float Fahrenheit(float);

int main()
{
	cout << "digite uma temperatura em graus celsius: ";
	float celsius, graus;
	cin >> celsius;
	graus = Fahrenheit(celsius);

	cout << celsius << " graus celsius enquivalem a " << graus << " graus fahrenheit.\n";
	
	
}

float Fahrenheit(float n)
{
	float m = (1.8 * n) + 32;
	return(m);
}