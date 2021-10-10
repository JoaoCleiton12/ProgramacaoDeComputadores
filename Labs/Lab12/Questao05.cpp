#include <iostream>
using namespace std;

struct definirdata
{
	int dia1, mes1, ano1;
};

struct horario
{
	int hora1, minuto1, segundo1;
};

struct evento
{
	char local[25];
	definirdata dia, mes, ano;
	horario hora, minuto, segundo;
};

int main()
{
	
	evento local2;
	evento data2;
	evento hora2;

	char barras;
	char pontos;

	cout << "informe o nome do evento:\n";
	cin >> local2.local;

	cout << endl;

	cout << "entre com os dados do evento\n";
	cout << "-----------------------------\n";
	cout << "data do evento(formato DD/MM/AAAA\n";
	cin >> data2.dia.dia1;
	cin >> barras;
	cin >> data2.mes.mes1;
	cin >> barras;
	cin >> data2.ano.ano1;

	cout << endl;

	cout << "horario do evento(formato HH:MM:SS)\n";
	cin >> hora2.hora.hora1;
	cin >> pontos;
	cin >> hora2.minuto.minuto1;
	cin >> pontos;
	cin >> hora2.segundo.segundo1;

	cout << endl;

	cout << "Calendario de eventos\n";
	cout << "----------------------\n";
	cout << local2.local << "; dia " << data2.dia.dia1 << barras << data2.mes.mes1 << barras << data2.ano.ano1
		<< "; as " << hora2.hora.hora1 << pontos << hora2.minuto.minuto1 << pontos << hora2.segundo.segundo1 << endl;
}