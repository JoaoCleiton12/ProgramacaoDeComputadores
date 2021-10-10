#include <iostream>
#include "funçõesquesta03.h"
using namespace std;


int main()
{
	palavra dicionario[10] =
	{
		{"bola", "ball", "pelota"},
		{"futebol", "soccer", "futbol"}
	};

	cout << "digite uma mesma palavra em:\n";
	cout << "portugues: ";
	cin >> dicionario[2].portugues;
	cout << "ingles: ";
	cin >> dicionario[2].ingles;
	cout << "espanhol: ";
	cin >> dicionario[2].espanhol;

	cout << endl;

	exibirpalavra(dicionario[0]);
	exibirpalavra(dicionario[1]);
	exibirpalavra(dicionario[2]);



}
