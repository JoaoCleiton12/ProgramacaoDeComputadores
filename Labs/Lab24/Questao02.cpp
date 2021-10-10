#include <iostream>
#include <fstream>
using namespace std;

struct soldado
{
	char nome[10];
	int eliminacoes;
	int mortes;
	float taxadeelimipormorte;
	int partidas;
};

void exibircoisas(soldado p);

int main()
{
	char escolha;
	soldado player;
	ifstream fin;
	ofstream fout;
	cout << "[N]ovo soldado (sobrescreve o anterior)\n";
	cout << "[A]tualiza soldado (com os dados da ultima partida)\n";
	cout << "[E]xibe soldado (atual)\n";
	cout << "[S]air\n";
	cin >> escolha;
	player.taxadeelimipormorte = 0;
	while (escolha != 'S')
	{
		if (escolha == 'N')
		{

			fout.open("tiposoldado.bin", ios_base::out | ios_base::binary);
			if (!fout.is_open())
			{
				cout << "Arquivo não pode ser aberto!" << endl;
				system("pause");
				return EXIT_FAILURE;
			}
			cout << "Nome: ";
			cin >> player.nome;
			cout << "eliminacoes: ";
			cin >> player.eliminacoes;
			cout << "Mortes: ";
			cin >> player.mortes;
			player.taxadeelimipormorte = player.eliminacoes / player.mortes;
			cout << "numero de partidas jogadas: ";
			cin >> player.partidas;
			fout.write((char*)&player, sizeof(soldado));
			fout.close();
		}

	
		if (escolha == 'A')
		{
			int tempelimi, tempmortes;
			fout.open("tiposoldado.bin", ios_base::out | ios_base::binary);
			if (!fout.is_open())
			{
				cout << "Arquivo não pode ser aberto!" << endl;
				system("pause");
				return EXIT_FAILURE;
			}
			cout << "eliminacoes: ";
			cin >> tempelimi;
			player.eliminacoes += tempelimi;
			cout << "Mortes: ";
			cin >> tempmortes;
			player.mortes += tempmortes;
			player.taxadeelimipormorte = player.eliminacoes/player.mortes;
			player.partidas += 1;
			fout.write((char*)&player, sizeof(soldado));
			fout.close();
			
		}
		if (escolha == 'E')
		{
			exibircoisas(player);
		}
		cout << "[N]ovo soldado (sobrescreve o anterior)\n";
		cout << "[A]tualiza soldado (com os dados da ultima partida)\n";
		cout << "[E]xibe soldado (atual)\n";
		cout << "[S]air\n";
		cin >> escolha;
	}
}
void exibircoisas(soldado p)
{
	ifstream fin2;
	fin2.open("tiposoldado.bin", ios_base::in | ios_base::binary);
	if (fin2.is_open())
	{
		cout << "\nAqui esta o conteudo do arquivo:" << endl;
		fin2.read((char*)&p, sizeof(soldado));
		cout << "Nome: " << p.nome << endl;
		cout << "Eliminacoes: " << p.eliminacoes << endl;
		cout << "Mortes: " << p.mortes << endl;
		cout << "Taxa de eliminacoes: " << p.taxadeelimipormorte << endl;
		cout << "paridas: " << p.partidas << endl;
		fin2.close();
		cout << endl;
	}
}