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
/*i inicialmente é igual a 0, durante do laço while, será exibido 
tres "Oi!", apos o fim do laço while i assume valor 4. Inicia-se um outro laço,
o Do-While, em que primeiro será exibido "Tchau!" e caso o valor de i(inicialmente é 4,
e sofrerá um incremento de +1) seja menor ou igual a 8, a palavra "Tchau!" continuará sendo exibida.
*/