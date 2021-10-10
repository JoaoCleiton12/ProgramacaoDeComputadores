#include <iostream>
using namespace std;

struct contabancaria
{
	char nomedocliente[25];
	float saldo;
};

int main()
{
	contabancaria cliente1;
	cliente1.saldo = 0;
	cout << "Informe seus dados:\n";
	cout << "nome: ";
	cin.getline(cliente1.nomedocliente, 20);
	cout << "Conta Bancaria\n " << "Nome: " << cliente1.nomedocliente
		<< "\nSaldo: R$" << cliente1.saldo << endl;

	cout << "Quanto o senhor deseja depositar na sua conta? ";
	cin >> cliente1.saldo;

	cout << "Conta Bancaria\n " << "Nome: " << cliente1.nomedocliente
		<< "\nNovo saldo: R$" << cliente1.saldo <<endl;
}