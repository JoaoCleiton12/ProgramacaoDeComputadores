#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (++i < 4)
		cout << "Oi! ";
	do
		cout << "Tchau! ";
	while (i++ <= 8);
}
/*i inicialmente � igual a 0, durante do la�o while, ser� exibido 
tres "Oi!", apos o fim do la�o while i assume valor 4. Inicia-se um outro la�o,
o Do-While, em que primeiro ser� exibido "Tchau!" e caso o valor de i(inicialmente � 4,
e sofrer� um incremento de +1) seja menor ou igual a 8, a palavra "Tchau!" continuar� sendo exibida.
*/