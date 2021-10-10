#pragma once

struct contabancaria
{
	char nomedocliente[25];
	float saldo;
};
void exibirdados(contabancaria cliente);

struct palavra
{
	char portugues[25];
	char ingles[25];
	char espanhol[25];
};
void exibirpalavra(palavra dicionario);
