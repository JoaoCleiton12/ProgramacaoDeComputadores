#include <iostream>
using namespace std;

struct pessoa
{
	char nome[20];
	int idade;
	char sexo[10];
};

int main()
{
	pessoa * quant = new pessoa[10];
	int soma = 0;
	int totalpessoas = 0;
	int i = 0;
	do{
		cout << "nome: ";
		cin >> quant[i].nome;
		if (strcmp(quant[i].nome, "fim"))
		{
			cout << "idade: ";
			cin >> quant[i].idade;
			cout << "sexo(masculino/feminino): ";
			cin >> quant[i].sexo;
			soma += quant[i].idade;
			totalpessoas++;
		}
		else
		{
			cout << "encerrado!";
		}
		
	}while (strcmp(quant[i].nome, "fim"));
	cout << "A media de idade do grupo e " << soma / totalpessoas << endl;

	delete[] quant;
}