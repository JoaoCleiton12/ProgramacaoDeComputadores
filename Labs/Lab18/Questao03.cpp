#include <iostream>
using namespace std;

int main()
{
	char texto[100];
	cout << "Digite um texto:\n";
	cin.getline(texto, 100);
	int i = 0;


	while (texto[i] != '@')
	{
		cout << texto[i];
		i++;
	}
	
	
}