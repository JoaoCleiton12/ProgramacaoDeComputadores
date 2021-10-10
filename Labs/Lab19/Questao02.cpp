#include <iostream>
using namespace std;

int main()
{
	int mes[12];
	int soma1 = 0;
	int soma2 = 0;
	int soma3 = 0;
	const char* meses[12] =
	{ "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", 
	"Junho", "Julho", "Agosto", "Setembro", "Outubro", 
	"Novembro", "Dezembro" };
	for (int k = 0; k < 1; k++)
	{
		cout << "Digite o numero de livros vendidos no 1 ano:\n";
		for (int i = 0; i < 12; i++)
		{
			cout << meses[i] << ": ";
			cin >> mes[i];
			soma1 += mes[i];

		}
		cout << "Digite o numero de livros vendidos no 2 ano:\n";
		for (int i = 0; i < 12; i++)
		{
			cout << meses[i] << ": ";
			cin >> mes[i];
			soma2 += mes[i];

		}
		cout << "Digite o numero de livros vendidos no 3 ano:\n";
		for (int i = 0; i < 12; i++)
		{
			cout << meses[i] << ": ";
			cin >> mes[i];
			soma3 += mes[i];

		}
	}
	cout << "Total de vendas\n";
	cout << "1 ano: " << soma1 << endl;
	cout << "2 ano: " << soma2 << endl;
	cout << "3 ano: " << soma3 << endl;
	cout << "Nos tres anos foram vendidos " << soma1 + soma2 + soma3 << " livros." << endl;
}