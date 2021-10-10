#include <iostream>
using namespace std;

union cordocarro
{
	char nomecor[15];
	int numerodacor;
	char codigo[15];
};
struct infocarro
{
	char nome[25];
	int anofabri;
	cordocarro cor;
	int preco;

};

int main()
{
	infocarro carros[10] =
	{
		{"Vectra", 2009, "Azul", 58000},
		{"Polo", 2008, "Preto", 4500000}
	};

	cout << "Informacoes carro\n" << "------------------\n";
	cout << "modelo do carro: ";
	cin >> carros[2].nome;
	cout << endl;
	cout << "ano de fabricacao: ";
	cin >> carros[2].anofabri;
	cout << endl;

	int tipo;
	cout << "nome da cor: 1\n" << "numero correspondente a cor: 2\n" 
		 << "codigo correspondente a cor: 3\n" << "como deseja informar a cor? \n";
	cin >> tipo;
	if (tipo == 1)
	{
		cout << "cor do carro: ";
		cin >> carros[2].cor.nomecor;
	}
	if (tipo == 2)
	{
		cout << "cor do carro: ";
		cin >> carros[2].cor.numerodacor;
	}
	if (tipo == 3)
	{
		cout << "cor do carro: ";
		cin >> carros[2].cor.codigo;
	}

	cout << "Preco do carro: ";
	cin >> carros[2].preco;

	system("CLS");


	cout << "modelo: " << carros[0].nome << endl << "ano de fabricacao: " << carros[0].anofabri << endl
	<< "cor do carro: " << carros[0].cor.nomecor << endl << "preco do carro: R$" << carros[0].preco << endl;
	cout << endl;

	cout << "modelo: " << carros[1].nome << endl << "ano de fabricacao: " << carros[1].anofabri << endl
	<< "cor do carro: " << carros[1].cor.nomecor << endl << "preco do carro: R$" << carros[1].preco << endl;
	cout << endl;

	if (tipo == 1)
	{
		cout << "modelo: " << carros[2].nome << endl << "ano de fabricacao: " << carros[2].anofabri << endl
			<< "cor do carro: " << carros[2].cor.nomecor << endl << "preco do carro: R$" << carros[2].preco << endl;
	}
	if (tipo == 2)
	{
		cout << "modelo: " << carros[2].nome << endl << "ano de fabricacao: " << carros[2].anofabri << endl
			<< "cor do carro: " << carros[2].cor.nomecor << endl << "preco do carro: R$" << carros[2].preco << endl;
	}
	if (tipo == 3)
	{
		cout << "modelo: " << carros[2].nome << endl << "ano de fabricacao: " << carros[2].anofabri << endl
			<< "cor do carro: " << carros[2].cor.nomecor << endl << "preco do carro: R$" << carros[2].preco << endl;
	}
		 
}