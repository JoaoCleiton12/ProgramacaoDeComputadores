#include <iostream>
using namespace std;

int main()
{
	float peso;
	peso = 30;
	cout << peso;
	delete peso;
}
/*
Não é um código válido, a variavel peso foi criada de forma automática
e não é possível deletar uma memória criada automaticamente.
*/