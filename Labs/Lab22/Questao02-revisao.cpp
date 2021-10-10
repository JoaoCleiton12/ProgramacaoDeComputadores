#include <iostream>
using namespace std;

int main()
{
	/*
	* o programa entra em loop caso o usuário digite a letra s, ou outra letra.
	int escolha;
	cin >> escolha;
	while (escolha != 5) {
		switch (escolha) {
		case 1: cout << "Boa escolha\n."; break;
		case 2: cout << "Estou na dúvida\n."; break;
		case 3: cout << "Não sei o que dizer.\n"; break;
		case 4: cout << "Quatro é um número\n."; break;
		default: cout << "Esta não é uma opção.\n";
		}
		cin >> escolha;
	}
	return 0;
	


	
	* desta maneira o programa não entra em loop, quando o numero 5, 
	* ou qualquer letra diferenta de a,b,c,d for digitado.
	char escolha;
	cin >> escolha;
	while (escolha != 5) {
		switch (escolha) {
		case 'a': cout << "Boa escolha\n."; break;
		case 'b': cout << "Estou na dúvida\n."; break;
		case 'c': cout << "Não sei o que dizer.\n"; break;
		case 'd': cout << "Quatro é um número\n."; break;
		default: cout << "Esta não é uma opção.\n";
		}
		cin >> escolha;
	}
	return 0;
	/*
}