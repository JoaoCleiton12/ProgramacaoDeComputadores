#include <iostream>
using namespace std;

float media(float n1, float n2);

int main()
{
	float valorx, valory, valordividido;

	cout << "Digite um valor inteiro: ";
	cin >> valorx;

	cout << "Digite outro valor inteiro: ";
	cin >> valory;

	valordividido = media(valorx, valory);

	cout << "media dos numeros: " << valordividido;
}

float media(float n1, float n2)
{
	float calculmedia;
	calculmedia = (n1 + n2) / 2;

	return(calculmedia);
}