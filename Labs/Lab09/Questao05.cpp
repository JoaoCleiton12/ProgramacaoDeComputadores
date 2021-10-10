#include <iostream>
using namespace std;

int main()
{
	double variavel1 = 245.795;
	int variavel2 = (int)variavel1;

	double variavel1vezes100 = 245.795 * 100;
	int variavel2vezes100 = (int)variavel1 * 100;

	cout << "variavel 1 double : " << variavel1 << endl;
	cout << "variavel 2 int : " << variavel2 << endl;
	cout << "variavel 1 double vezes 100 : " << variavel1vezes100 << endl;
	cout << "variavel 2 int vezes 100 : " << variavel2vezes100 << endl;

/* Na variavel tipo double, por ser um numero com, 3 casa decimais quando multiplicada por 100,
a virgula anda 2 casas para trás, ou seja, o numero que era 245,795 passa a ser 24579,5. 
Já na variavel que recebe so o valor inteiro, ou seja 245, quando multiplicada por 100,
o numero se torna 24500. As lições que podem ser aprendidas são que a multiplicação com o número
com as casas decimais é mais precisa do que a multiplicação com o número que contém somente a parte inteira,
pois como é visto nesse exemplo, ocorre uma perca de 79 unidades do número.*/
}