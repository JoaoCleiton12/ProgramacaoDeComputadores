#include <iostream>
using namespace std;


struct dataevento
{
	int dia;
	int mes;
	int ano;
};

struct horario
{
	int hora;
	int minuto;
};
struct descricao
{
	char desc1[18];
	char desc2[18];
};
int main()
{
	horario hora[10];
	dataevento Data[10];
	descricao DESC[10];


	cout << "Entre com 2 eventos:\n";
	cout << "#1\n";
	cout << "Data: ";
	cin >> Data[0].dia;
	cin >> Data[0].mes;
	cin >> Data[0].ano;

	cout << "Hora: ";
	cin >> hora[0].hora;
	cin >> hora[0].minuto;
	cin.get();
	cout << "Desc:";
	cin.getline(DESC[0].desc1, 18);
//-----------------------------------------------
	cout << "#2\n";
	cout << "Data: ";
	cin >> Data[1].dia;
	cin >> Data[1].mes;
	cin >> Data[1].ano;

	cout << "Hora: ";
	cin >> hora[1].hora;
	cin >> hora[1].minuto;
	cin.get();
	cout << "Desc:";
	cin.getline(DESC[1].desc2, 18);
//-----------------------------------------------
//-----------------------------------------------
	cout << "-------------------------\n";
	cout << "Eventos Cadastrados\n";
	cout << Data[0].dia << "/" << Data[0].mes << "/" << Data[0].ano << " "
		<< hora[0].hora << ":" << hora[0].minuto << " " << DESC[0]. desc1 << endl;

	cout << Data[1].dia << "/" << Data[1].mes << "/" << Data[1].ano << " "
		<< hora[1].hora << ":" << hora[1].minuto << " " << DESC[1].desc2 << endl;
}