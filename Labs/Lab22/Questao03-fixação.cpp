#include <iostream>
using namespace std;

struct bop {
	char nome[50]; // nome do funcionário
	char cargo[50]; // cargo que ocupa na empresa
	char apelido[50]; // apelido do funcionário
	int pref; // 0 = nome, 1 = cargo, 2 = apelido
};

int main()
{
	bop perfis[4] =
	{
		{"jose", "gerente", "josin", 1},
		{"marcos", "porteiro", "marcao", 2},
		{"joao", "seguranca", "joaozin", 2},
		{"carlos", "assistente", "carlin", 0}
	};

	cout << "Listagem de funcionarios\n";
	cout << endl;
	cout << "a.	mostar por nome\n";
	cout << "b. mostrar por cargo\n";
	cout << "c. mostrar por apelido\n";
	cout << "d.	mostrar por preferencia\n";
	cout << "e.	sair\n";
	cout << endl;
	
	char opcao;
	cout << "digite sua opcao: ";
	cin >> opcao;

	while (opcao != 'e')
	{
		for (int i = 0; i < 4; i++)
		{
			switch (opcao)
			{
			case 'a': cout << perfis[i].nome << endl;;
				break;
			case 'b': cout << perfis[i].cargo << endl;
				break;
			case 'c': cout << perfis[i].apelido <<endl;
				break;
			case 'd':
				if (perfis[i].pref == 0)
				{
					cout << perfis[i].nome << endl;
				}
				if (perfis[i].pref == 1)
				{
					cout << perfis[i].cargo << endl;
				}
				if (perfis[i].pref == 2)
				{
					cout << perfis[i].apelido << endl;
				}
				break;
			}
		}
		cout << endl;
		cout << "digite sua opcao: ";
		cin >> opcao;
	}
	cout << "Tchau!\n";

}