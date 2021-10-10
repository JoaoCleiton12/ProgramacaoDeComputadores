#include <iostream>
using namespace std;

int main()
{
	int A[10] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };
	cout << "Pares de vetores:\n";
	for (int i = 0; i < 1; i++)
	{
		int* pontei1 = &A[i];
		cout << "[" << pontei1[i] << "," << pontei1[i + 1] << "] ";
		cout << "[" << pontei1[i + 2] << "," << pontei1[i + 3] << "] ";
		int* pontei2 = &A[i];
		cout << "[" << pontei2[i + 2] << "," << pontei1[i + 3] << "] ";
		cout << "[" << pontei2[i + 8] << "," << pontei2[i + 9] << "]";
	}
	cout << endl;
}