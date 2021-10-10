#include <iostream>
using namespace std;

int main()
{
	float pesos[3] = { 2, 3, 4 };
	float notasalunos[3];

	cout << "Informe suas 3 notas: ";
	cin >> notasalunos[0];
	cin >> notasalunos[1];
	cin >> notasalunos[2];

	//multiplica cada nota com seu respectivo peso e após dividir por 9
	//obtemos o a media com base no sistema de notas antigo.
	double sistemaantigo = ((notasalunos[0] * pesos[0]) + (notasalunos[1] * pesos[1]) + (notasalunos[2] * pesos[2])) / 9;
	cout << "a media parcial do aluno, com base no sistema antigo e: " << sistemaantigo << endl;
	
	//soma todas as três notas e divide por 3
	//obtemos a media aritimética do anulo, que é usada no novo sistema de notas
	double sistemanovo = (notasalunos[0] + notasalunos[1] + notasalunos[2]) / 3;
	cout << "A mediaparcial do aluno, com base no sistema novo e: " << sistemanovo << endl;

}