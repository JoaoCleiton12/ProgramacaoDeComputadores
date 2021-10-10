#include <iostream>
using namespace std;

struct tupla
{ 
	int a; 
	int b; 
	int c; 
};

void trocar(tupla& a, tupla& b);

int main()
{
	tupla A;
	tupla B;
	cout << "Tupla A: ";
	cin >> A.a >> A.b >> A.c;
	cout << "Tupla B: ";
	cin >> B.a >> B.b >> B.c;
	cout << endl;
	trocar(A, B);
	cout << "Invertendo...\n";
	cout << endl;
	cout << "Tupla A: " << A.a << " " << A.b << " " << A.c << endl;
	cout << "Tupla B: " << B.a << " " << B.b << " " << B.c;

}
void trocar(tupla& a, tupla& b)
{
	//inverte os valores da posicao a nas tuplas A e B
	int temp;
	temp = a.a;
	a.a = b.a;
	b.a = temp;
	//inverte os valores da posicao b nas tuplas A e B
	temp = a.b;
	a.b = b.b;
	b.b = temp;
	//inverte os valores da posicao c nas tuplas A e B
	temp = a.c;
	a.c = b.c;
	b.c = temp;

}