#include <iostream>
using namespace std;

struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void exibir(const Caixa * coca);
void calcular(Caixa * volu);

int main()
{
	Caixa  lata = { "coca-cola", 75, 40, 60 };
	exibir(&lata);
	calcular(&lata);
	exibir(&lata);
}
void exibir(const Caixa* coca)
{
	cout << coca->marca << ":\n"
		<< coca->altura << " cm de altura\n"
		<< coca->largura << " cm de largura\n"
		<< coca->comprimento << " cm de comprimento\n";
	cout << coca->volume << " volume de cm^3\n";
}
void calcular(Caixa * volu)
{
	volu->volume = (volu->comprimento * volu->largura * volu->altura);
}