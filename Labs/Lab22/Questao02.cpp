#include <iostream>
using namespace std;

int main()
{
	int a= 0, e = 0, i = 0, o = 0, u = 0;
	char ch;
	cout << "Digite uma frase (@ para finalizar):\n";
	cin.get(ch);

	while (ch != '@')
	{
		switch (ch)
		{
			case 'a': a++; break;
			case 'A': a++; break;
			case 'e': e++; break;
			case 'E': e++; break;
			case 'i': i++; break;
			case 'I': i++; break;
			case 'o': o++; break;
			case 'O': o++; break;
			case 'u': u++; break;
			case 'U': u++; break;

		}
		cin.get(ch);
	}
	cout << "a: " << a << endl;
	cout << "e: " << e << endl;
	cout << "i: " << i << endl;
	cout << "o: " << o << endl;
	cout << "u: " << u << endl;




}