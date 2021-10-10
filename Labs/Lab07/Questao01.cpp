#include <iostream>
using namespace std;


//protótipo das funções
char codificar(char);
char decodificar(char);


//função principal
int main()
{
	cout << "Digite um caracter qualquer: ";
	char caracter;
	cin >> caracter;

	cout << "Caracter codificado: " << codificar(caracter) << endl;
	cout << "Caracter descodificado: " << decodificar(codificar(caracter)) << endl;

}

// funções secundárias
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