#define _USE_MATH_DEFINES
#include <cmath>
double tamanhovetor(double n1, double n2)
{
	double m = sqrt(pow(n1, 2) + pow(n2, 2));
	return(m);
}

double angulograus(double n1, double n2)
{
	double m = (atan2(n1, n2) * 180) / (M_PI);
	return(m);
}