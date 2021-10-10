#include <iostream>
#include "cabeçalhodasfunçoesdaquestao01.h"

int main()
{
	cout << "Primeiro complexo: ";
	complexos primeiro = ler();
	cout << "Segundo complexo: ";
	complexos segundo = ler();
	complexos resultado1 = soma(primeiro, segundo);
	complexos resultado2 = multipli(primeiro, segundo);
	cout << "a soma dos numeros: "; 
	exibir(resultado1);
	cout << endl;
	cout << "a multiplicacao dos numeros: ";
	exibir(resultado2);
	cout << endl;

}
