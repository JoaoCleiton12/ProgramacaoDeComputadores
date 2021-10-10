#include <iostream>
#define black "\033[7;37;40m"
#define yellow "\033[1;33;40m"
#define green "\033[32m"
#define red "\033[31;31m"
#define blue "\033[34;5;154m"
#define backg "\033[38;5;0;48;5;154m"
#define default "\033[m"
using namespace std;

void print(int n);
void print(double m);
void print(const char * str);

int main()
{
	cout << "Inteiro: ";
	print(45);
	cout << "\nPonto-flutuante: ";
	print(3.9);
	cout << "\nString: ";
	print("Oi Mundo");
	cout << "\n";
}
void print(int n)
{
	cout << yellow << n << default;
}
void print(double m)
{
	cout << blue << m << default;
}
void print(const char * str)
{
	cout << red << str << default;
}