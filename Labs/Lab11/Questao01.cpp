#include <iostream>
using namespace std;

int main()
{
	string senha = "c++123";
	
	char senhadigitada[40];
	cout << "Digite a senha: ";
	cin >> senhadigitada;

	if (senhadigitada == senha)
	{
		cout << "senha correta!";
	}
	else
	{
		cout << "senha incorreta!";
	}
}