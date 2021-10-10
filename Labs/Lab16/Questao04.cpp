#include <iostream>
using namespace std;

int main()
{
	int B[10] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	cout << "Pares de vetores:\n";
	for (int i = 0; i < 1; i++)
	{
		cout << "[" << B[i] << "," << B[i + 9] << "] ";
		cout << "[" << B[i + 1] << "," << B[i + 8] << "] ";
		cout << "[" << B[i + 2] << "," << B[i + 7] << "] ";
		cout << "[" << B[i + 3] << "," << B[i + 6] << "]";
		cout << "[" << B[i + 4] << "," << B[i + 5] << "]";
	}
	cout << endl;
}