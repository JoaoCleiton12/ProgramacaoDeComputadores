#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numero2;
	string numero1;
	int i;

	cout << "entre com dois numeros: ";
	cin >> numero1;
	cin >> numero2;

	i = stoi(numero1);
	
	cout << "A multiplicacao entre eles e " << i * numero2 << endl;
}