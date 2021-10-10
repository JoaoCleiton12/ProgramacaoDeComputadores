#include <iostream>
using namespace std;
int main()
{
	int valor = 10, * temp, soma = 0;
	temp = &valor;
	*temp = 20;
	temp = &soma;
	*temp = valor;
	cout << "valor: " << valor << "\nsoma: " << soma << endl;
}
/* inicialmente o ponteiro "temp" vai apontar para a variavel inteira "valor"
que tem valor 10, depois o ponterio "temp" vai alterar o valor da variavel "valor" para 20
depois o ponteiro "temp" vai apontar para a variavel inteira "soma" que possui valor 0,
em seguida depois o ponterio "temp" vai alterar o valor da variavel "soma" para o valor da variavel
"valor" que agora é 20, e por fim irá mostras as variaveis "valor" = 20; e "soma" = 20.
*/