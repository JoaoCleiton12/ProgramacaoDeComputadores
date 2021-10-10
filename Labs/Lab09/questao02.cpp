#include <iostream>
using namespace std;

int main()
{
	cout << "Digite os dois numeros inteiros: ";
	int numerox, numeroy;
	cin >> numerox;
	cin >> numeroy;

	int quociente = numerox / numeroy;
	int resto = numerox % numeroy;

	cout << "O quociente de " << numerox << "/" << numeroy << " e " << quociente << endl;
	cout << "O resto da divisao " << numerox << "%" << numeroy << " e " << resto << endl;
}