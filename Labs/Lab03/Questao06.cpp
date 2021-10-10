#include <iostream>
using namespace std;

int main() 
{
	int ladoA, ladoB, areadabase, altura, volume;
	cout << "informe os valores da base: ";
	cin >> ladoA >> ladoB;
	areadabase = ladoA * ladoB;
	cout << "area da base: " << areadabase << endl;

	cout << "Informe a altura do prisma: ";
	cin >> altura;
	volume = altura * ladoA * ladoB;

	cout << "lado a: " << ladoA << endl;
	cout << "lado b: " << ladoB << endl;
	cout << "area da base: " << areadabase << endl;
	cout << "altura: " << altura << endl;
	cout << "volume do prisma: " << volume << endl;



}