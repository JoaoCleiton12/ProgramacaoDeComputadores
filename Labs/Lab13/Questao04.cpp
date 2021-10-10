#include <iostream>
using namespace std;
enum semana { SEG, TERC, QUART, QUINT, SEXT, SABAD, DOMIN, AGO, SET, OUT, NOV, DEZ };
int main()
{
	char dias[7][8] =
	{
	"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado",
	"Domingo"
	};
	for (semana ind = SEG; ind <= DOMIN; ind = semana(ind + 1))
		cout << dias[ind] << endl;
	return 0;
}