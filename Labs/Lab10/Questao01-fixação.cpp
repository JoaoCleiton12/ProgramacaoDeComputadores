#include <iostream>
using namespace std;

int main()
{
	cout << " Prezado cliente, \n" << "Digite a quantidade de quilos desejados: \n";
	float quilosdesejados[3];
	cout << " Alface: ";
	cin >> quilosdesejados[0];
	cout << " Beterraba: ";
	cin >> quilosdesejados[1];
	cout << " Cenoura: ";
	cin >> quilosdesejados[2];


	float prešoproduto[3] = { 1.50, 2, 1 };
	float valoralface = quilosdesejados[0] * prešoproduto[0];
	float valorbeterraba = quilosdesejados[1] * prešoproduto[1];
	float valorcenoura = quilosdesejados[2] * prešoproduto[2];

	cout << fixed;
	cout.precision(2);
	cout << " Resumo da compra\n" << " --------------------------\n";
	cout << " Alface = R$" << valoralface << endl;
	cout << " Beterraba = R$" << valorbeterraba << endl;
	cout << " Cenoura = R$" << valorcenoura << endl;
	cout << " --------------------------\n";
	cout << " Total = R$" << valoralface + valorbeterraba + valorcenoura << endl;


}