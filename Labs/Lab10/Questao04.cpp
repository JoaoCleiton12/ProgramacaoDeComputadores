#include <iostream>
using namespace std;

int main()
{
	int vetorA[5] = { 10, 20, 30, 40, 50 };
	cout << "int vet[5] = {" << vetorA[0] << " " << vetorA[1] << " "
		<< vetorA[2] << " " << vetorA[3] << " " << vetorA[4] << "}" << endl;

	int i;
	/*colocamos o i para variar até 500, e colocamos o i para ser a posição do vetor,
	 dessa forma o sistema operacioanl vai fechar o programa, pois
	 estamos tentando acessar uma posição da memória que esta fora, da memória que foi
	 diponibilizada para nosso vetor, se colocarmos o i até o valor máximo de posições menos 1, ou seja, 4
	 o programa funcionará normalmente */
	for (i = 0; i <= 4; i++)
		vetorA[i] = 60;

	//altere o valor da posição para verificar oque foi dito acima.
	//de modo que se o valor máximo do i é 4 entao o valor máximo que a posição do vetor pode receber é 4.
	cout << "vet[i] = " << vetorA[4] << endl;


	


}