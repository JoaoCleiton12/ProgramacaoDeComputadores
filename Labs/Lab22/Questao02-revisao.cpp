#include <iostream>
using namespace std;

int main()
{
	/*
	* o programa entra em loop caso o usu�rio digite a letra s, ou outra letra.
	int escolha;
	cin >> escolha;
	while (escolha != 5) {
		switch (escolha) {
		case 1: cout << "Boa escolha\n."; break;
		case 2: cout << "Estou na d�vida\n."; break;
		case 3: cout << "N�o sei o que dizer.\n"; break;
		case 4: cout << "Quatro � um n�mero\n."; break;
		default: cout << "Esta n�o � uma op��o.\n";
		}
		cin >> escolha;
	}
	return 0;
	


	
	* desta maneira o programa n�o entra em loop, quando o numero 5, 
	* ou qualquer letra diferenta de a,b,c,d for digitado.
	char escolha;
	cin >> escolha;
	while (escolha != 5) {
		switch (escolha) {
		case 'a': cout << "Boa escolha\n."; break;
		case 'b': cout << "Estou na d�vida\n."; break;
		case 'c': cout << "N�o sei o que dizer.\n"; break;
		case 'd': cout << "Quatro � um n�mero\n."; break;
		default: cout << "Esta n�o � uma op��o.\n";
		}
		cin >> escolha;
	}
	return 0;
	/*
}