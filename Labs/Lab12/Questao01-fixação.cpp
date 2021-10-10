#include <iostream>
using namespace std;

struct chocolate
{
	char marca[20];
	float peso;
	int calorias;
};

int main()
{
	chocolate lanche = { "charge", 2.3, 350 };

	cout << lanche.marca << " peso: " << lanche.peso
		<< " calorias: " << lanche.calorias << endl;
}