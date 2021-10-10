#include <iostream>
using namespace std;

struct login
{
	char nome[20];
	char senha[20];
};

int main()
{
	login adm ={"jose","c++"};
	login usuario;

	cout << "Entrar\n";
	cout << "nome: ";
	cin >> usuario.nome;
	cout << "senha: ";
	cin >> usuario.senha;
	login temp1;
	login temp2;
	for (int i = 0; i < 20; i++)
	{
		temp1.nome[i] = adm.nome[i];
		temp2.nome[i] = usuario.nome[i];

		temp1.senha[i] = adm.senha[i];
		temp2.senha[i] = usuario.senha[i];
	}
	
	if ((strcmp(temp1.nome, temp2.nome)))

	{
		if ((strcmp(temp2.senha, temp1.senha)))
		{
			cout << "Login ou senha incorretos";
		}
	}
	else
		cout << "login e senha corretos";
	
}