#include <iostream>
using namespace std;

int main()
{
	float quilo;
	cout << "Digite seu peso em quilos: ";
	cin >> quilo;


	float tempocorridahora, tempocorridaminu, tempocorridaminutotal, energiaCorrida;
	char Letra1, Letra2;
	cout << "Digite o tempo de corrida: ";
	cin >> tempocorridahora;
	cin >> Letra1;
	cin >> tempocorridaminu;
	cin >> Letra2;

	tempocorridaminutotal = (tempocorridahora * 60) + tempocorridaminu;
	energiaCorrida = (tempocorridaminutotal / 60) * quilo * 7.0;

	float tempociclismohora, tempociclismominu, tempociclismominutotal, energiaCiclismo;
	char Letra3, Letra4;
	cout << "Digite o tempo de tempo de ciclismo: ";
	cin >> tempociclismohora;
	cin >> Letra3;
	cin >> tempociclismominu;
	cin >> Letra4;

	tempociclismominutotal = (tempociclismohora * 60) + tempociclismominu;
	energiaCiclismo = (tempociclismominutotal / 60) * quilo * 7.0;

	float temponatacaohora, temponatacaominu, temponatacaominutotal, energiaNatacao;
	char Letra5, Letra6;
	cout << "Digite o tempo de natacao: ";
	cin >> temponatacaohora;
	cin >> Letra5;
	cin >> temponatacaominu;
	cin >> Letra6;

	temponatacaominutotal = (temponatacaohora * 60) + temponatacaominu;
	energiaNatacao = (temponatacaominutotal / 60) * quilo * 8.0;


	float energiatotal;
	energiatotal = energiaCorrida + energiaCiclismo + energiaNatacao;
	cout << "voce gastou um total de " << energiatotal << " de calorias." << endl;
}