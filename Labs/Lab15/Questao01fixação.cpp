#include <iostream>
using namespace std;

int main()
{
	int numalu;
	cout << "digite o numero de alunos(minimo 2): ";
	cin >> numalu;
	
	float* notasfinais = new float[numalu];

	cout << "digite a nota de dois alunos: ";
	cin >> notasfinais[0];
	cin >> notasfinais[1];
	cout << "as notas digitadas foram: " << notasfinais[0] << " e " << notasfinais[1] << endl;

	delete[] notasfinais;
}