#include <iostream>
using namespace std;
long long calculo(long long, long long);
int main()
{
	long long resultado = 200530LL * 420800;
	/* colocando um LL em um dos valores  (ou nos dois) o compilador entende que
	essa constante deve ser guardada em um long long, logo o resultado dessa operação
	também deverá ser guardado em um long long
	*/
	cout << "Direto: " << resultado << endl;
	cout << "Funcao: " << calculo(200530, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}