#include <iostream>
using namespace std;

int main() 
{
	char variavel = 'D';
	char * pontei = &variavel;
	*pontei = 'Q';

	cout << variavel << endl;
	cout << *pontei << endl;

}