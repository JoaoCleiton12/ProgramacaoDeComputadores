#include <iostream>
using namespace std;

int main()
{
	cout << "Digite os valores para altura, largura e comprimento: " << endl;
	
	float altura, largura, comprimento;
	
	cin >> altura >> largura >> comprimento;
	float volume;
	volume = (altura * largura * comprimento);

	cout << "tem o volume de   " << volume << endl;
}