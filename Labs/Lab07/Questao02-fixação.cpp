#include <iostream>
using namespace std;

char senha();
char som();

int main()
{
	char senhadousuario;
	cout << "iniciando um som...\n";
	som();
	senha();
	cout << endl;
	cout << "Obrigado!\n";
}
char senha()
{
	char m;
	cout << "digite sua senha:_______\b\b\b\b\b\b\b";
	cin >> m;
	return(m);
 }
char som()
{
	char bipe = '\a';
	cout << bipe;
	return(bipe);
	
}