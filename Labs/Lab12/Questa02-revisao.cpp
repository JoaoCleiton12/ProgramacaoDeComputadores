#include <iostream>
#include "cabeçalhodasfunçoesdaquestao02.h"

int main()
{
	cout << "Primeiro complexo: ";
	complexos primeiro;
	cin >> primeiro;
//-----------------------------------------------------
	cout << "Segundo complexo: ";
	complexos segundo;
	cin >> segundo;
//-----------------------------------------------------
	complexos resultado1 = primeiro + segundo;
	complexos resultado2 = primeiro * segundo;
//-----------------------------------------------------
	cout << "a soma dos numeros: " << resultado1;
	cout << endl;
	cout << "a multiplicacao dos numeros: " << resultado2;
	cout << endl;
//-----------------------------------------------------
}
