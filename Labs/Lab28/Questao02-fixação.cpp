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

void exibir(Caixa& coca);
void calcular(Caixa& volu);

int main()
{
	Caixa lata = {"coca-cola", 75, 40, 60 };
	exibir(lata);
}
void exibir(Caixa& coca)
{
	cout << coca.marca << ":\n"
		<< coca.altura << " cm de altura\n"
		<< coca.largura << " cm de largura\n"
		<< coca.comprimento << " cm de comprimento\n";
	calcular(coca);
	cout << coca.volume << " volume de cm^3\n";
}
void calcular(Caixa& volu)
{
	volu.volume = (volu.comprimento * volu.largura * volu.altura);
}