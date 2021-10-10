#include <iostream>
#include "funçõesquesta03.h"
using namespace std;


int main()
{
	contabancaria cliente1;
	cliente1.saldo = 0;
	cout << "Informe seus dados:\n";
	cout << "nome: ";
	cin.getline(cliente1.nomedocliente, 20);
	cout << "Quanto o senhor deseja depositar na sua conta? ";
	cin >> cliente1.saldo;
	exibirdados(cliente1);
	
}


