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
	chocolate lanche[3]
	{
		{"charge", 2.3, 3000},
		{"diamante", 4.1, 7300},
		{"lacta", 2.8, 4153}

	};

	cout << lanche[0].marca << " " << lanche[0].peso << " " << lanche[0].calorias << endl;
	cout << lanche[1].marca << " " << lanche[1].peso << " " << lanche[1].calorias << endl;
	cout << lanche[2].marca << " " << lanche[2].peso << " " << lanche[2].calorias << endl;
}