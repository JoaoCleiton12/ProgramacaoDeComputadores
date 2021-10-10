#include <iostream>
using namespace std;

struct ascii
{
	char caracter;
	int valor;
};

ascii* funcaorecebe(ascii* n);
int main()
{
	ascii* valor1 = new ascii;
	cout << "digite um caracter qualquer: ";
	cin >> valor1->caracter;
	valor1->valor = valor1->caracter;
	ascii * pontei = funcaorecebe(valor1);
	
	cout << "local da memoria: " << pontei << endl;
	delete valor1;
}
ascii* funcaorecebe(ascii * n)
{
	ascii* vet = new ascii;
	vet->caracter = n->caracter;
	vet->valor = n->valor;
	return(vet);
	delete vet;
}