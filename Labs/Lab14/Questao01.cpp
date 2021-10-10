#include <iostream>
using namespace std;

union estado
{
	char tipoestado[10];
};

union tipoalimento
{
	char tipocomida[10];
};

struct tigela
{
	estado tigl1;
	tipoalimento tigl2;
};

void fome(tigela* pontei);

int main()
{
	tigela tigl =
	{
		{"cheia"},
		{"sopa"}
	};
	tigela* pontei = &tigl;
	
	cout << "tigela antes da janta: " << pontei->tigl1.tipoestado 
		 << " com " << pontei->tigl2.tipocomida << endl;
	cout << "tigela depois da janta: "; fome(&tigl);

}
void fome(tigela* pontei)
{
	
	*pontei = { 'v', 'a', 'z', 'i', 'a' };
	cout << pontei->tigl1.tipoestado << endl;
}