#include <iostream>
using namespace std;


//prot�tipo das fun��es
char codificar(char);
char decodificar(char);


//fun��o principal
int main()
{
	cout << "Digite um caracter qualquer: ";
	char caracter;
	cin >> caracter;

	cout << "Caracter codificado: " << codificar(caracter) << endl;
	cout << "Caracter descodificado: " << decodificar(codificar(caracter)) << endl;

}

// fun��es secund�rias
char codificar(char n)
{
	char m = n + 3;
	return(m);
}

char decodificar(char n)
{
	char m = n - 3;
	return(m);
}