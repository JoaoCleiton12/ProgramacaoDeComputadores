#include <iostream>
using namespace std;

int main()
{
	int privalores[5];
	int segunvalores[5];
	int finalvalores[5];
	int j = 0;
	cout << "digite 10 valores inteiros: ";
	
	//esse la�o vai ler os 10 valores digitados
	for (int i = 0; i < 10; i++)
	{
	// esse if vai receber o valor[0] at� o valor[4]
		if (i < 5)
		{
			cin >> privalores[i];
		}
		// esse if vai receber o valor[5] at� o valor[9]
		if (i >= 5)
		{
			cin >> segunvalores[j];
			j++;
		}
		
	}

	//esse la�o vai receber a soma dos respectivos elementos dos dois primeiros vetores.
	for (int i = 0; i < 5; i++)
	{
		finalvalores[i] = privalores[i] + segunvalores[i];
	}
	
	cout << "vetor A: ";
	//mostra os 5 primeiros valores
	for (int i = 0; i < 5; i++)
	{
		cout << privalores[i] << " ";

	}


	cout << endl;
	cout << "vetor B: ";
	//mostra os 5 ultimos valores
	for (int i = 0; i < 5; i++)
	{
		cout << segunvalores[i] << " ";

	}
	cout << endl;
	//mostra o o vetor que cont�m a soma dos respectivos elementos dos dois primeiros vetores.
	cout << "vetor S: ";
	for (int i = 0; i < 5; i++)
	{
		cout << finalvalores[i] << " ";

	}


}