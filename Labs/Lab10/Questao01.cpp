#include <iostream>
using namespace std;

int main()
{
	int vetorinicial[5] = { 10, 80, 30, 45, 15 };
	cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " " 
	<< vetorinicial[2] << " " <<  vetorinicial[3] << " " << vetorinicial[4] << endl;
	cout << "----------------------\n";
	
	//usu�rio vai escolher qual posi��o quer alterar.
	int posicao;
	cout << "Alterar posicao: ";
	cin >> posicao;

	//usu�rio vai escolher qual o novo valor da posi��o que ele deseja alterar.
	int novovalor;
	cout << "Novo valor: ";
	cin >> novovalor;

	cout << "----------------------\n";

	//Os ifs permitem que o usu�rio altere a posi��o que ele escolheu
	//e o vetor correspondente a essa posi��o recebe o valor digitado pelo usu�rio 
	//e mostra na tela o novo resultado.
	if (posicao == 0)
	{
		vetorinicial[0] = novovalor;
		cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " "
		<< vetorinicial[2] << " " << vetorinicial[3] << " " << vetorinicial[4] << endl;
	}

	if (posicao == 1)
	{
		vetorinicial[1] = novovalor;
		cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " "
			<< vetorinicial[2] << " " << vetorinicial[3] << " " << vetorinicial[4] << endl;
	}

	if (posicao == 2)
	{
		vetorinicial[2] = novovalor;
		cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " "
			<< vetorinicial[2] << " " << vetorinicial[3] << " " << vetorinicial[4] << endl;
	}

	if (posicao == 3)
	{
		vetorinicial[3] = novovalor;
		cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " "
			<< vetorinicial[2] << " " << vetorinicial[3] << " " << vetorinicial[4] << endl;
	}

	if (posicao == 4)
	{
		vetorinicial[4] = novovalor;
		cout << "Vetor: " << vetorinicial[0] << " " << vetorinicial[1] << " "
			<< vetorinicial[2] << " " << vetorinicial[3] << " " << vetorinicial[4] << endl;
	}
}