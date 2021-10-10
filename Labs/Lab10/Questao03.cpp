#include <iostream>
#include "FuncaodaQuestao03.h"
using namespace std;


int main()
{
	double vetorA[3];

	cout << "Informe tres valores para serem armazenados no vetor: ";
	cin >> vetorA[0];
	cin >> vetorA[1];
	cin >> vetorA[2];

	cout << endl;
	cout << "o valor resultante das operacoes e: " << funçãonovovalor(vetorA) << endl;

}
