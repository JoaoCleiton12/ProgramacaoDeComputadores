#include <iostream>
using namespace std;

double VolumeCilindro(double raio, double altura);

int main()
{
	cout << "calcula o volume do cilindro\n";
	cout << "----------------------------\n";

	double valorbase, valoraltura, volume;
	cout << "entre com o raio da base: ";
	cin >> valorbase;
	cout << "ente com a altura: ";
	cin >> valoraltura;

	volume = VolumeCilindro(valorbase, valoraltura);

	cout << "volume do cilindro: " << volume << endl;

 }

double VolumeCilindro(double raio, double altura)
{
	double calculo;
	double pi = 3.14159;
	calculo = (raio * raio) * altura * pi;
	return(calculo);
}