#include <iostream>
using namespace std;

struct peixe
{
	string nome;
	float peso;
	int tamanho;
};

void funcaorecebe(peixe nome, peixe peso, peixe tamanho);
void funcaocomponteiro(peixe* pont);

int main()
{
	peixe tilapia;
	cout << "nome do peixe: ";
	cin >> tilapia.nome;
	cout << "peso: ";
	cin >> tilapia.peso;
	cout << "tamanho: ";
	cin >> tilapia.tamanho;
	funcaorecebe(tilapia, tilapia, tilapia);
	peixe* pont = &tilapia;
	funcaocomponteiro(&tilapia);
}
void funcaocomponteiro(peixe* pont)
{
	cout << "com ponteiro: " << pont->nome << " com " << pont->peso << "g e " << pont->tamanho << "cm" << endl;
}
void funcaorecebe(peixe nome, peixe peso, peixe tamanho)
{
	cout << "sem ponteiro: " << nome.nome << " com " << peso.peso << "g e " << tamanho.tamanho << "cm" << endl;
}