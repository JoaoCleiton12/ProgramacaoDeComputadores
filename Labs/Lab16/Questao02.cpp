#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char palavra1[20];
	char palavra2[20];
	char palavra3[20];
	char palavra4[20];

	cout << "digite 4 palavras:\n";
	cin >> palavra1;
	cin >> palavra2;
	cin >> palavra3;
	cin >> palavra4;

	int num = strlen(palavra1) + strlen(palavra2) + strlen(palavra3) + strlen(palavra4);
	
	char* totalpalavra = new char[num+3];

	strcpy(totalpalavra, palavra1);
	strcat(totalpalavra, " ");
	strcat(totalpalavra, palavra2);
	strcat(totalpalavra, " ");
	strcat(totalpalavra, palavra3);
	strcat(totalpalavra, " ");
	strcat(totalpalavra, palavra4);


	cout << "Concatenando as palavras obtem-se:\n";
	cout << totalpalavra;

	delete[] totalpalavra;
}