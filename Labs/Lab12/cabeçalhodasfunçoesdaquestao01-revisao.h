#pragma once
#include <iostream>
using namespace std;
struct complexos
{
	float real;
	float img;
};
complexos soma(complexos n1, complexos n2);
complexos multipli(complexos n1, complexos n2);
void exibir(complexos n1);
complexos ler();
