#include <iostream>
using namespace std;

int main()
{
	int vetorA[5] = { 10, 20, 30, 40, 50 };
	cout << "int vet[5] = {" << vetorA[0] << " " << vetorA[1] << " "
		<< vetorA[2] << " " << vetorA[3] << " " << vetorA[4] << "}" << endl;

	int i;
	/*colocamos o i para variar at� 500, e colocamos o i para ser a posi��o do vetor,
	 dessa forma o sistema operacioanl vai fechar o programa, pois
	 estamos tentando acessar uma posi��o da mem�ria que esta fora, da mem�ria que foi
	 diponibilizada para nosso vetor, se colocarmos o i at� o valor m�ximo de posi��es menos 1, ou seja, 4
	 o programa funcionar� normalmente */
	for (i = 0; i <= 4; i++)
		vetorA[i] = 60;

	//altere o valor da posi��o para verificar oque foi dito acima.
	//de modo que se o valor m�ximo do i � 4 entao o valor m�ximo que a posi��o do vetor pode receber � 4.
	cout << "vet[i] = " << vetorA[4] << endl;


	


}