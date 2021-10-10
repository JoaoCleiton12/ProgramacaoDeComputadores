#include <iostream>
using namespace std;

int main()
{
	cout << "Menu do Sistema\n";
	cout << endl;
	cout << "a) Inserir\n";
	cout << "b) Remover\n";
	cout << "c) Buscar\n";
	cout << "d) Sair\n";
	cout << endl;

	char escolha;
	cout << "Escolha: ";
	cin >> escolha;

	while (escolha != 'd')
	{
		switch (escolha)
		{
			case 'a':
				cout << "Inserindo elementos..." << endl;
				break;
			case 'b':
				cout << "Removendo elementos..." << endl;
				break;
			case 'c':
				cout << "Buscando elementos..." << endl;
				break;
			default: cout << "Opcao invalida..." << endl;

		}
		cout << endl; 
		cout << "Escolha: ";
		cin >> escolha;
	}

}