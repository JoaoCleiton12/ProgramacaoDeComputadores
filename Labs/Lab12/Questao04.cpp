#include <iostream>
using namespace std;

struct livro
{
	char nome[25];
	float preco;
};

struct jogo
{
	char nome[25];
	float preco;
};

int main()
{

	livro emprestado1[2] =
	{
		{"historia da arte", 45.3},
		{"pinoquio", 63.65}
	};
	jogo emprestado2[2] =
	{
		{"Xadrez", 23.45},
		{"cobra e escada", 34.78}
	};

	int escolha;

	cout << "oque voce deseja pegar emprestado?\n";
	cout << "livro digite 1\n";
	cout << "jogo digite 0\n";
	cin >> escolha;

	if (escolha == 1)
	{
		cout << "opcoes de livros disponiveis:\n" << emprestado1[0].nome << " R$" << emprestado1[0].preco << endl;
		cout << emprestado1[1].nome << " R$" << emprestado1[1].preco << endl;
	}
	if(escolha == 0)
	{
		cout << "opcoes de jogos disponiveis:\n" << emprestado2[0].nome << " R$" << emprestado2[0].preco << endl;
		cout << emprestado2[1].nome << " R$" << emprestado2[1].preco << endl;
	}

}