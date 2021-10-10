#include <iostream>
using namespace std;

int main()
{
	int somatorio[10] = {0,1,0,0,1,0,1,1,1,1};
	int resultado = 0;

	for (int i = 0; i < 10; i++)
		resultado += somatorio[i];
	cout << "resultado: " << resultado;
	cout << endl;

}
