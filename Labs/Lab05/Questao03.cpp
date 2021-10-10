#include <iostream>
using namespace std;

float massacorporal(float, float);

int main()
{
	cout << "Indice de massa corporal (IMC)\n";
	cout << "------------------------------\n";
	cout << "Altura: ";
	double altura, massa;
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;

	cout << "IMC: " << massacorporal(altura, massa);

}

float massacorporal(float n1, float n2)
{
	float m = n2 / (n1 * n1);
	return(m);
}