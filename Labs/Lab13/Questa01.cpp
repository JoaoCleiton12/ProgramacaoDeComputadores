#include <iostream>
using namespace std;

enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };
union jogador
{
	char nome[25];
	int numero;
};
struct gol
{
	jogador jog; // identifica��o do jogador
	float x, y, z; // posi��o da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // acelera��o da bola
}; gol estatistica[10]; // estat�sticas para at� 10 gols

/* 
	Respostas

   i) estastica = deve armazenar o tipo gol[10]
   j) estatistica[4] = deve armazenar o tipo gol
   k) estatistica[1].jog = deve armazenar o tipo jogador
   L) estatistica->jog.numero = dever armazenar o tipo int

   m) (estatistica + 9)->local = deve armazenar o tipo trave 
   n) estatistica[2].velo = deve armazenar o tipo float
   o) (estatistica + 1)->jog.nome[0] = deve armazenar um char
   p) estatistica[6].acel = deve armazenar um float



*/