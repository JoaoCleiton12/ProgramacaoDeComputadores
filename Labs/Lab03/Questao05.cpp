#include <iostream>
using namespace std;

int main()
{
	int hora, minuto;
	char pontos;
	cout << "Que horas sao? ";
	cin >> hora >> pontos >> minuto;

	cout << "seu relogio esta atrasado." << endl;
	cout << "agora sao " << hora + 1 << pontos << minuto << "." <<endl;
}