#include <iostream>
using namespace std;

struct nadador
{
	char nome[20];
	int idade;
	char categoria[20];
};
int main()
{
	nadador atleta;
	cout << "digite o nome:";
	cin >> atleta.nome;
	cout << "digite a idade:";
	cin >> atleta.idade;
	

}
