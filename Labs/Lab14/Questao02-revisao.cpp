#include <iostream>
using namespace std;

int main()
{
	float torque[10] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float * pont1 = &torque[0];
	float * pont2 = &torque[9];

	cout << "Primeiro: " << *pont1 << endl;
	cout << "Segundo: " << *pont2 << endl;

}