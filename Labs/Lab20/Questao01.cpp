#include <iostream>
using namespace std;

int main()
{
	int distancia;
	
	cout << "Qual a distancia da viagem?\n";
	cin >> distancia;
	if (distancia <= 200)
	{
		cout << "O preco da viagem e " << distancia * 0.50f;
	}
	if ((distancia > 200) & (distancia <= 400))
	{
		cout << "O preco da viagem e " << distancia * 0.40f;
	}
	if (distancia > 400)
	{
		cout << "O preco da viagem e " << distancia * 0.30f;
	}
}