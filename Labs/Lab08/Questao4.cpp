#include <iostream>
using namespace std;

// AS RESPOSTAS EST�O NOS COMENTARIOS.

int main()
{
	cout << "as respostas estao nos comentarios.";
	float a = 3.78575f * 8.129338f;
	/* letra A: tera problema pois o resultado dessa multiplica��o �
	30,7756413335, que extrapola o valor de digitos significativos
	e o valor da mantissa.*/


	float b = 3e30f + 2e15f;
	/* letra B: ter� problema pois o resultado dessa soma � 3e+30, que extrapola o valor de digitos
	significativos e o valor da mantissa*/

	float c = 20518.56f * 2.0f;
	/* letra C: ter� problema pois o resultado dessa multiplica��o � 
	41.037,12, que extrapola o valor de digitos significativos*/

	float d = 3.14159f + 1.45f;
	/*letra D: n�o ter� problemas, pois o resultado dessa soma �
	4.59159, e n�o extrapola nenhum valor.*/

	float e = 2.0f * 1e30f;
	/*letra E: ter� problemas pois o resultado dessa multiplica��o � 2e+30,
	que extrapola o valor dos digitos significativos e mantissa*/

}