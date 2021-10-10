#include <iostream>
#include <fstream>
using namespace std;

union tipo
{
	char alfanum[15];
	int num;
};

int main()
{
	ofstream fout;
	ifstream fin;
	tipo senha;
	char escolha;
	cout << "Deseja exibir a senha armazenada ou gravar uma nova senha\n";
	cout << "e = exibir\n";
	cout << "g = gravar nova senha\n";
	cin >> escolha;
	if (escolha == 'e')
	{
		fin.open("senhas.bin", ios_base::in | ios_base::binary);
		if (fin.is_open())
		{
			
			while (fin.read((char*)&senha, sizeof(tipo))) {
				cout << senha << endl;
			}
			fin.close();
		}

	}
	if (escolha == 'g')
	{
		fout.open("senhas.bin", ios_base::out | ios_base::binary);

		if (!fout.is_open())
		{
			cout << "Arquivo não pode ser aberto!" << endl;
			system("pause");
			return EXIT_FAILURE;
		}
		int tipo;
		cout << "deseja digitar uma senha alfanumerica(1) ou somente numerica(2): ";
		cin >> tipo;
		if (tipo == 1)
		{
			cout << "digite a senha: ";
			cin >> senha.alfanum;
		}
		if (tipo == 2)
		{
			cout << "digite a senha: ";
			cin >> senha.num;
		}
		fout.write((char*)&senha, sizeof(tipo));
		fout.close();
	}
}