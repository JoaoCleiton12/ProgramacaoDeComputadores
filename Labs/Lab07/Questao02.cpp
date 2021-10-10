#include <iostream>
using namespace std;

//protótipo das funções
char codificar(char);
char decodificar(char);

int main()
{
	cout << "digite uma letra: ";
	char letra;
	cin >> letra;
	cout << "oque voce deseja fazer com a letra:\n";
	cout << "codificar: 1\n";
	cout << "decodificar: 0\n";
	bool escolha;
	cin >> escolha;

	//escolha entra codificar ou decodificar
	//usei o "cout" dentro do if else para garantir que esta funcionando.
	if (escolha == true)
		cout << codificar(letra);

	else
		cout << decodificar(letra);

	
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