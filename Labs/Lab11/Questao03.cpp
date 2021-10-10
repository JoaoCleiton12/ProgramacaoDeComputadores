#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char nome[30];
	char data[20];
	char contatenacao1[50];
	char contatenacao2[70];
	

	cout << "Nome: ";
	cin.getline(nome, 30);

	cout << "Data: ";
	cin.getline(data, 20);

	strcpy(contatenacao1, nome);
	strcat(contatenacao1, " esteve aqui em ");
	strcpy(contatenacao2, contatenacao1);
	strcat(contatenacao2, data);
	

	cout << contatenacao2 << endl;
}