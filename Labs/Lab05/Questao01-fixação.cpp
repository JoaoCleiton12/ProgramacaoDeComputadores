#include <iostream>
using namespace std;

void horario(int, int);

int main()
{
	cout << "entre com o numero de horas: ";
	int horas, minutos;
	cin >> horas;
	cout << "entre com o valor de minutos: ";
	cin >> minutos;

	cout << "agora sao ";
	horario(horas, minutos);
}

void horario(int n1, int n2)
{
	cout << n1 << ":" << n2;
}