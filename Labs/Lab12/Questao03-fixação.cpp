#include <iostream>
using namespace std;

struct descrevedata
{
	int dia;
	int mes;
	int ano;
};

int calculardias(descrevedata nascimento, descrevedata hoje);

int main()
{
	descrevedata nascimento;
	char barras;
	cout << "digite sua data de nascimento: ";
	cin >> nascimento.dia;
	cin >> barras;
	cin >> nascimento.mes;
	cin >> barras;
	cin >> nascimento.ano;

	descrevedata hoje;
	cout << "digite a data de hoje: ";
	cin >> hoje.dia;
	cin >> barras;
	cin >> hoje.mes;
	cin >> barras;
	cin >> hoje.ano;

	cout << "voce tem: " << calculardias(nascimento, hoje) << " dias de vida." << endl;
}
int calculardias(descrevedata nascimento, descrevedata hoje)
{
	int diasnacimento = (((nascimento.mes -1) * 31) + (nascimento.ano * 365) + nascimento.dia);
	int diashoje = (((hoje.mes - 1) * 31) + (hoje.ano * 365) + hoje.dia);
	return(diashoje - diasnacimento);
}