#include <iostream>
using namespace std;

struct horario
{
	int hora1, minuto1;
};

void ler();
int subtrair(horario inicio, horario fim);
void exibir(horario x, horario y);

int main()
{
	cout << "entre com os horarios de inicio e fim da sua aula\n";
	cout << "--------------------------------------------------\n";
	ler();
}
void ler()
{
	horario hoje[2];
	char pontos;

	cout << "inicio: ";
	cin >> hoje[0].hora1;
	cin >> pontos;
	cin >> hoje[0].minuto1;


	cout << "fim: ";
	cin >> hoje[1].hora1;
	cin >> pontos;
	cin >> hoje[1].minuto1;

	//função ler puxa a função exibir
	exibir(hoje[0], hoje[1]);
}
int subtrair(horario inicio, horario fim)
{
	//esta função transformas a hora digitada em minutos

	int horaemminutoscomeco = ((inicio.hora1 * 60) + inicio.minuto1);
	int horaemminutosfinal = ((fim.hora1 * 60) + fim.minuto1);
	int duracaoemminuto = (horaemminutosfinal - horaemminutoscomeco);

	return(duracaoemminuto);

}


void exibir(horario x, horario y)
{
	//função exibir chama a função subtrair para calcular os minutos
	
	int minutostotal = subtrair(x, y);
	int horas = (minutostotal / 60);
	int minutos = minutostotal - (horas * 60);

	cout << "entre " << x.hora1 << ":" << x.minuto1 << " e "
		<< y.hora1 << ":" << y.minuto1 << " existem "
		<< minutostotal << " minutos, isto e, " << horas << "h"
		<< " e " << minutos << " minutos." << endl;
}