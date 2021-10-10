#include <iostream>
using namespace std;

struct balao
{
	float diamentro;      //diâmentro em metros
	char marca[20];       //nome da marca
	int modelo;           //número do modelo
};

int main()
{
	balao* variavel = new balao;

	cout << "diametro: ";
	cin >> variavel->diamentro;
	cout << "marca: ";
	cin >> variavel->marca;
	cout << "modelo: ";
	cin >> variavel->modelo;

	cout << "a bola " << variavel->marca << " " << variavel->modelo 
		 << " tem " << variavel->diamentro << " de diametro." << endl;
	
	delete variavel;
}