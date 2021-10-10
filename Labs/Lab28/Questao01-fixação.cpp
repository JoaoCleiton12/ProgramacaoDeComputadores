#include <iostream>
using namespace std;

void chamada(int& cont);

int main()
{
	int contador = 1;
	chamada(contador);
	chamada(contador);
	chamada(contador);
	chamada(contador);
}
void chamada(int& cont)
{
	cout << cont << "a chamada da funcao.\n";
	cont++;
}