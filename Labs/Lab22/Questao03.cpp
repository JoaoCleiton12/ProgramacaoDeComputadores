#include <stdlib.h>
#include <iostream>
using namespace std;

struct prato
{
	char nome[20];
	int preco;
};

int main()
{
	prato restaurante[3] =
	{
		{"hotdog", 6},
		{"tapioca", 4},
		{"bolo", 3}
	};
	cout << "***************\n";
	cout << "Lanchonete c++\n";
	cout << "***************\n";
	cout << "Cardapio\n";
	cout << "------------------------\n";
	cout << "a) " << restaurante[0].nome << "\t\t" << "R$ " << restaurante[0].preco << endl;
	cout << "b) " << restaurante[1].nome << "\t\t" << "R$ " << restaurante[1].preco << endl;
	cout << "c) " << restaurante[2].nome << "\t\t\t" << "R$ " << restaurante[2].preco << endl;
	char opcao;
	cout << "escolha entre a, b ou c(de acordo com o cardapio) ou aperte s para finalizar.\n";
	cout << "Deseja pedir algo? ";
	cin >> opcao;
	cout << endl;
	int soma = 0;
	int i = 0;
	while (opcao != 's')
	{
		switch (opcao)
		{
			case 'a': 
				soma += restaurante[i].preco;
				break;
			case 'b':
				soma += restaurante[i].preco;
				break;
			case 'c':
				soma += restaurante[i].preco;
		}
		cout << "total parcial:\t\t" << "R$" << soma << endl;

		i++;
		cout << "Cardapio\n";
		cout << "------------------------\n";
		cout << "a) " << restaurante[0].nome << "\t\t" << "R$ " << restaurante[0].preco << endl;
		cout << "b) " << restaurante[1].nome << "\t\t" << "R$ " << restaurante[1].preco << endl;
		cout << "c) " << restaurante[2].nome << "\t\t\t" << "R$ " << restaurante[2].preco << endl;
		cout << "escolha entre a, b ou c(de acordo com o cardapio) ou aperte s para finalizar.\n";
		cout << "Deseja pedir algo? ";
		cin >> opcao;
		cout << endl;
	}
	cout << endl;
	cout << "Total a pagar:\t\t" << "R$" << soma << endl;

}