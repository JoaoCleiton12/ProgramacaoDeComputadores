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
N�o � um c�digo v�lido, a variavel peso foi criada de forma autom�tica
e n�o � poss�vel deletar uma mem�ria criada automaticamente.
*/