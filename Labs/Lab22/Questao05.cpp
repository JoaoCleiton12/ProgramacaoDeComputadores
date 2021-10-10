#include <iostream>
using namespace std;

int main()
{
	cout << "-------------------\n";
	cout << "MiniCalculdora c++\n";
	cout << "-------------------\n";
	char escolha;
	char operacao;
	double operando1, operando2;

	do
	{
		cout << "x <--->\tmultiplicacao.\n";
		cout << "/ <--->\tdivisao.\n";
		cout << "- <--->\tsubtracao.\n";
		cout << "+ <--->\tadicao.\n";
		cout << "digite como no exemplo(numero operacao numero)\n";
		cin >> operando1;
		cin >> operacao;
		cin >> operando2;
		cout << endl;
		switch (operacao)
		{
			case 'x':
				cout << operando1 * operando2 << endl; break;
			case '/': 
				cout << operando1 / operando2 << endl; break;
			case '-': 
				cout << operando1 - operando2 << endl; break;
			case '+':
				cout << operando1 + operando2 << endl; break;
		}

		cout << "digite a letra \" s \" para sair ou qualquer outra letra para continuar.";
		cin >> escolha;
	} while (escolha != 's');
		
	

}