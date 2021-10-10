#include <iostream>
using namespace std;

float mediaharmonica(float, float);

int main()
{
	cout << "entre com um numero: ";
	float x;
	cin >> x;
	float y;
	cout << "entre com outro numero: ";
	cin >> y;
	float media;
	media = mediaharmonica(x, y);

	cout << "a media harmonica dos numeros e " << media << endl;
}

float mediaharmonica(float n1, float n2)
{
	float m;
	m = (2.0 * n1 * n2) / (n1 + n2);
	return(m);
}