#include <iostream>
using namespace std;

union jogador {
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};
struct gol {
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
	gol ultimosgols[3];
	char pontos;
	cout << "Digite os dados dos 3 ultimos gols\n"
	<< "exemplo: nome do jogador ou numero da camisa do jogador; hora e minuto: hh:mm\n";
	int escolha;
	
//escolha entre nome ou numero do jogador 1------------------------------------------------------
	cout << "nome: 1\n" << "numero: 2\n";
	cin >> escolha;
	cout << endl;
	if (escolha == 1)
	{
		cout << "digite nome: ";
		cin >> ultimosgols[0].jog.nome;
	}
	if (escolha == 2)
	{
		cout << "digite numero: ";
		cin >> ultimosgols[0].jog.numero;
	}
//horario do gol do jogador1---------------------------------------------------------------------
	cout << "digite horario: ";
	cin >> ultimosgols[0].hora;
	cin >> pontos;
	cin >> ultimosgols[0].min;
	cout << endl;


//escolha entre nome ou numero do jogador 2------------------------------------------------------
	cout << endl;
	if (escolha == 1)
	{
		cout << "digite nome: ";
		cin >> ultimosgols[1].jog.nome;
	}
	if (escolha == 2)
	{
		cout << "digite numoro: ";
		cin >> ultimosgols[1].jog.numero;
	}
//horario do gol do jogador2---------------------------------------------------------------------
	cout << "digite horario: ";
	cin >> ultimosgols[1].hora;
	cin >> pontos;
	cin >> ultimosgols[1].min;
	cout << endl;


//escolha entre nome ou numero do jogador 3------------------------------------------------------
	cout << endl;
	if (escolha == 1)
	{
		cout << "digite nome: ";
		cin >> ultimosgols[2].jog.nome;
	}
	if (escolha == 2)
	{
		cout << "digite numero: ";
		cin >> ultimosgols[2].jog.numero;
	}
//horario do gol do jogador3---------------------------------------------------------------------
	cout << "digite horario: ";
	cin >> ultimosgols[2].hora;
	cin >> pontos;
	cin >> ultimosgols[2].min;
	cout << endl;


//dependendo da escolha do jogador 1(nome ou numero) -> mostrara uma dessas opcoes---------------
	if (escolha == 1)
	{
		cout << "GOL: " << ultimosgols[0].jog.nome << " ";
		cout << ultimosgols[0].hora << pontos << ultimosgols[0].min << endl;
	}
	if (escolha == 2)
	{
		cout << "GOL: " << ultimosgols[0].jog.numero << " ";
		cout << ultimosgols[0].hora << pontos << ultimosgols[0].min << endl;
	}



//dependendo da escolha do jogador 1(nome ou numero) -> mostrara uma dessas opcoes---------------
	if (escolha == 1)
	{
		cout << "GOL: " << ultimosgols[1].jog.nome << " ";
		cout << ultimosgols[1].hora << pontos << ultimosgols[1].min << endl;
	}
	if (escolha == 2)
	{
		cout << "GOL: " << ultimosgols[1].jog.numero << " ";
		cout << ultimosgols[1].hora << pontos << ultimosgols[1].min << endl;
	}
	


//dependendo da escolha do jogador 1(nome ou numero) -> mostrara uma dessas opcoes---------------
	if (escolha == 1)
	{
		cout << "GOL: " << ultimosgols[2].jog.nome << " ";
		cout << ultimosgols[2].hora << pontos << ultimosgols[2].min << endl;
	}
	if (escolha == 2)
	{
		cout << "GOL: " << ultimosgols[2].jog.numero << " ";
		cout << ultimosgols[2].hora << pontos << ultimosgols[2].min << endl;
	}

}