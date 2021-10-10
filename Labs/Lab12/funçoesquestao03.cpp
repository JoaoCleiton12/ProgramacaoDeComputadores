#include <iostream>
#include "funçõesquesta03.h"
using namespace std;

void exibirdados(contabancaria cliente)
{
	cout << "Conta Bancaria\n" << "Nome: " << cliente.nomedocliente
		<< "\nSaldo: R$" << 0 << endl;

	cout << endl;
	cout << "informacoes atualizadas\n";
	cout << "Conta Bancaria\n" << "Nome: " << cliente.nomedocliente
		<< "\nNovo saldo: R$" << cliente.saldo << endl;
}

void exibirpalavra(palavra dicionario)
{
	cout << "portugues: " << dicionario.portugues << "; ingles: "
		<< dicionario.ingles << "; espanol: " << dicionario.espanhol << endl;
}