#include <iostream>
#include <fstream>
using namespace std;

void unidade(ifstream& fin1, int num1, int linhas = 10);

int main() 
{
	ifstream fin;
	fin.open("stats.txt");
	unidade(fin, 1);
	unidade(fin, 2);
	unidade(fin, 3);
	fin.close();
}
void unidade(ifstream& fin1, int num1, int linhas)
{
	int somanumlab = 0, somanumrevi = 0, somanumfixa = 0, somanumapren = 0;
	int numlab, numrevi, numfixa, numapren;
	

	for (int i = 1; i <= linhas; i++)
	{	 
		fin1 >> numlab;
		fin1 >> numrevi;
		fin1 >> numfixa;
		fin1 >> numapren;
		somanumlab += numlab;
		somanumrevi += numrevi;
		somanumfixa += numfixa;
		somanumapren += numapren;
	}

	cout << "-----------\n";
	cout << num1 << "a unidade\n";
	cout << "-----------\n";
	cout << "Revisao: " << somanumrevi << endl;
	cout << "Fixacao: " << somanumfixa << endl;
	cout << "Aprendi: " << somanumapren << endl;
	cout << "-----------\n";
	cout << "Total: " << somanumapren + somanumfixa + somanumrevi << endl;
}