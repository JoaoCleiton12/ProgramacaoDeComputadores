#include <iostream>
using namespace std;

void UmTres(void);
void Dois(void);

int main()
{
	cout << "comecando agora:\n";
	UmTres();
	cout << "\nPronto!";

}

void UmTres(void)
{
	cout << "Um ";
	Dois();
	cout << " Tres";

}

void Dois(void)
{
	cout << "Dois";
}