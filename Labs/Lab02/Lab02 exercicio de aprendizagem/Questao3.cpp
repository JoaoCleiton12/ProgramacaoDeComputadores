#include <iostream>
using namespace std;

int main()
{
	cout << left; cout.width(11); cout << "Produto";
	cout << right; cout.width(5); cout << "Preco/kg";
	cout.width(16); cout << "Pedido(kg)";
	cout.width(20); cout << "Total Parcial" << endl;

	cout << left; cout.width(11); cout << "-------";
	cout << right; cout.width(5); cout << "---------";
	cout.width(13); cout << "--------";
	cout.width(24); cout << "---------------" << endl;

	cout << left; cout.width(11); cout << "Alface";
	cout << right; cout.width(5); cout << "R$ 1,25/kg";
	cout.width(9); cout << "3,2kg";
	cout.width(19); cout << "R$ 4,00"; cout << endl;

	cout << left; cout.width(11); cout << "Beterraba";
	cout << right; cout.width(5); cout << "R$ 0,65/kg";
	cout.width(9); cout << "6,0kg";
	cout.width(19); cout << "R$ 3,90"; cout << endl;

	cout << left; cout.width(11); cout << "Cenoura";
	cout << right; cout.width(5); cout << "R$ 0,90/kg";
	cout.width(9); cout << "10kg";
	cout.width(19); cout << "R$ 9,00"; cout << endl;

}