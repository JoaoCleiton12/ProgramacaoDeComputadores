#include <iostream>
using namespace std;

int main()
{
	char opcao = 'a';
	int preco;
	int codigo;
	int i = 0;
	
	do
	{
		cout << "digite o preco do produto: ";
		cin >> preco;
		cout << "codigo de origem: ";
		cin >> codigo;
		switch (codigo)
		{
			case 1:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Sul\n"; break;
			case 2:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Sul\n"; break;
			case 3:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Norte\n"; break;
			case 4:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Centro-oeste\n"; break;
			case 5:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Nordeste\n"; break;
			case 6:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Nordeste\n"; break;
			case 7:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Sudeste\n"; break;
			case 8:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Sudeste\n"; break;
			case 9:
				cout << "Preco:\t" << "R$" << preco << endl;
				cout << "procedencia: Sudeste\n"; break;
			case 10: cout << "codigo invalido.\n"; break;
		}
		cout << endl;
		i++;
		cout << "digite a letra \" s \" se quiser sair ou qualquer letra para continuar.\n";
		cin >> opcao;
	} while (opcao != 's');
}