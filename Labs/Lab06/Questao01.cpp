#include <iostream>
using namespace std;

int main()
{
	cout << "digite o horario de partida (HH:MM): ";
	int horapartida, minutopartida;
	char pontosida;
	cin >> horapartida; 
	cin >> pontosida; 
	cin >> minutopartida;

	cout << "digite o horario de chegada (HH:MM): ";
	int horachegada, minutochegada;
	char pontoschegada;
	cin >> horachegada;
	cin >> pontoschegada; 
	cin >> minutochegada;

	int horaemminutodaviagempartida, horaemminutoviagemchegada, horaemminutoviagem, horadaviagem, minutodaviagem;
	horaemminutodaviagempartida = (horapartida * 60) + minutopartida;
	horaemminutoviagemchegada = (horachegada * 60) + minutochegada;

	horaemminutoviagem = horaemminutoviagemchegada - horaemminutodaviagempartida;
	horadaviagem = horaemminutoviagem / 60;
	minutodaviagem = horaemminutoviagem - (horadaviagem * 60);
	


	cout << "O tempo total de viagem foi " << horadaviagem << " horas e " << minutodaviagem << " min.\n";
}