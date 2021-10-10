#include <iostream>
using namespace std;

char codigonumerico(int);

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	n1 = 80;
	n2 = 114;
	n3 = 111;
	n4 = 103;
	n5 = 67;
	n6 = 111; 
	n7 = 109;
	n8 = 112;

	cout << "o numero : " << n1 << " corresponte a letra: " << codigonumerico(n1) << endl;
	cout << "o numero : " << n2 << " corresponte a letra: " << codigonumerico(n2) << endl;
	cout << "o numero : " << n3 << " corresponte a letra: " << codigonumerico(n3) << endl;
	cout << "o numero : " << n4 << " corresponte a letra: " << codigonumerico(n4) << endl;
	cout << "o numero : " << n5 << " corresponte a letra: " << codigonumerico(n5) << endl;
	cout << "o numero : " << n6 << " corresponte a letra: " << codigonumerico(n6) << endl;
	cout << "o numero : " << n7 << " corresponte a letra: " << codigonumerico(n7) << endl;
	cout << "o numero : " << n8 << " corresponte a letra: " << codigonumerico(n8) << endl;

}

char codigonumerico(int n)
{
	char m = n;
	return(m);
}