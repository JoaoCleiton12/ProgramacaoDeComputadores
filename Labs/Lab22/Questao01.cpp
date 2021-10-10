#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Supermercado ABC\n";
	cout << "----------------\n";
	cout << endl;
	cout << "a) Alface \t" << "R$ 1,25Kg\n";
	cout << "b) Beterraba \t" << "R$ 0,65/Kg\n";
	cout << "c) Cenoura \t" << "R$ 0,90/Kg\n";
	
	cout << endl;
	char letra;
	cout << "Faca seu pedido usando as letras (a, b, c) e (s) para encerrar\n";
	cout << "digite: ";
	cin >> letra;
	float kgalfa = 0, kgbete = 0, kgcenou = 0;
	cout << endl;
	while (letra != 's')
	{
		switch (letra)
		{
			case 'a': 
				cout << "Digite os quilos de alfaces que deseja: ";
				cin >> kgalfa; break;
			case 'b': 
				cout << "Digite os quilos de beterraba que deseja: ";
				cin >> kgbete;
				break;
			case 'c':
				cout << "Digite os quilos de cenoura que deseja: ";
				cin >> kgcenou;
				break;
		}
		cout << endl;
		cout << "a) Alface \t" << "R$ 1,25Kg\n";
		cout << "b) Beterraba \t" << "R$ 0,65/Kg\n";
		cout << "c) Cenoura \t" << "R$ 0,90/Kg\n";
		cout << "Faca seu pedido usando as letras (a, b, c) e (s) para encerrar\n";
		cout << "digite: ";
		cin >> letra;
	}
	cout << endl;
	float kgtotal = kgcenou + kgalfa + kgbete;
	float totalpedido;
	float desconto;
	float entrega;
	float total = 0.0f;
	totalpedido = ((kgalfa * 1.25f) + (kgbete * 0.65f) + (kgcenou * 0.90f));
	cout << fixed << setprecision(2);
	cout << "Total do pedido:\t\t" << "R$ " << totalpedido;
	cout << endl;
	if (totalpedido > 100)
	{
		desconto = (totalpedido * 0.05f);
		cout << "Desconto:\t\t\t" << "R$ " << desconto;
	}
	else
	{
		cout << "Desconto:\t\t\t" << "R$ 0.00";
	}
	cout << endl;
	if (kgtotal < 5)
	{
		entrega = 3.5;
		cout << "Custo de entrega:\t\t" << "R$ " << entrega;
		total = entrega + totalpedido;
	}
	if ((kgtotal == 5 || total <= 20))
	{
		entrega = 10;
		cout << "Custo de entrega:\t\t" << "R$ " << entrega;
		total = entrega + totalpedido;
	}
	if (kgtotal > 20)
	{
		entrega = (8.0f + ((kgtotal- 20.0f) * 0.10f));
		cout << "Custo de entrega:\t\t" << "R$ " << entrega;
		total = entrega + totalpedido;
	}
	cout << endl;
	cout << "---------------------------------------\n";
	cout << "Total a pagar:\t\t\t" << "R$ " << total;
}