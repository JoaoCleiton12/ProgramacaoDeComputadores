#pragma once
#include <iostream>
using namespace std;
struct complexos
{
	float real;
	float img;
};
complexos operator+(complexos n1, complexos n2);
complexos operator*(complexos n1, complexos n2);
ostream& operator<<(ostream& os, complexos &n1);
istream& operator>>(istream& is, complexos& n1);

