#include <iostream>
using namespace std;

void exibir(int vet[]);

int main()
{
	int mat[2][3] =
	{
	{1,2,3},
	{4,5,6}
	};

	exibir(mat[0]);

}
void exibir(int vet[])
{
	cout << vet[0];
}
// como esperado, a função mostrou o primeiro elemento da matriz(1).