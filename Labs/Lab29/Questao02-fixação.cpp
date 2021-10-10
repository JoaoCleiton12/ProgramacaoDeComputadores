#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Guloseima
{
	char marca[24];
	double peso;
	int calorias;
};

void gulo(Guloseima& tipo, const char* pontei = "charge", double num = 40.0, int num2 = 187);
void exibir(const Guloseima& tipo2);

int main()
{
	Guloseima cocada, bolacha, chiclete;
	gulo(cocada);
	exibir(cocada);

	gulo(bolacha, "treloso", 250.0, 3000);
	exibir(bolacha);
}
void gulo(Guloseima & tipo, const char * pontei, double num, int num2)
{
	strcpy(tipo.marca, pontei);
	tipo.peso = num;
	tipo.calorias = num2;
}
void exibir(const Guloseima& tipo2)
{
	cout << tipo2.marca << " possui " << tipo2.calorias << " calorias e pesa " << tipo2.peso << " gramas.\n";
}