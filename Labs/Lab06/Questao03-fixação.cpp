#include <iostream>]

using namespace std;

int main()
{
	int n_int;
	short n_short;
	long n_long;
	long long n_llong;

	cout << "short:           " << sizeof n_short << " bytes" << endl;
	cout << "int:             " << sizeof n_int << " bytes" << endl;
	cout << "long:            " << sizeof n_long << " bytes" << endl;
	cout << "long long:       " << sizeof n_llong << " bytes" << endl;
	
	int total;
	total = sizeof n_int + sizeof n_short + sizeof n_long + sizeof n_llong;
	cout << "total:           " << total << " bytes" << endl;
}