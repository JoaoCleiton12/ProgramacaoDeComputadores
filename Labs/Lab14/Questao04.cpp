#include <iostream>
using namespace std;

enum tipoimagem { JPG, PNG, BMP };
struct imagem
{
	char nome[20]; 
	int altura;
	int largura;
	tipoimagem tipo;
};

void detalhes(imagem* pontei);
int main()
{
	imagem foto1 = { "backg.png", 1920, 1080, PNG };
	imagem* pontei = &foto1;
	detalhes(pontei);
}
void detalhes(imagem* pontei)
{
	cout << "a imagem \"" << pontei->nome << "\" com tamanho "
		<< pontei->altura << "x" << pontei->largura << " tem formato ";
	if (pontei->tipo == 0)
	{
		cout << "JPG";
	}

	if (pontei->tipo == 1)
	{
		cout << "PNG";
	}

	if (pontei->tipo == 2)
	{
		cout << "BMP";
	}
}