#include <iostream>
using namespace std;

void linha(void);
void pequena(void);
void media(void);
void grande(void);

int main()
{
	pequena();
	media();
	grande();
	cout << "Programacao de Computadores\n";
	grande();
	media();
	pequena();
}

void linha(void)
{
	cout << "----------";
}

void pequena(void)
{
	linha();
	cout << "\n";
}

void media(void)
{
	linha();
	linha();
	cout << "\n";
}

void grande(void)
{
	linha();
	linha();
	linha();
	cout << "\n";
}