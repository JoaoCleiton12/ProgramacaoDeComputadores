#include <iostream>
using namespace std;

struct horario
{
	int hora;
	int minuto;
};

void MostrarHorario(horario* pontei);

int main()
{
	horario hora1;
	char pontos;
	cout << "Que horas sao? ";
	cin >> hora1.hora;
	cin >> pontos;
	cin >> hora1.minuto;
	horario* pontei = &hora1;
	MostrarHorario(&hora1);

}
void MostrarHorario(horario* pontei)
{
	cout << "Seu relogio esta atrasado, o horario correto e ";
	cout << pontei->hora + 1 << ":" << pontei->minuto << endl;
}