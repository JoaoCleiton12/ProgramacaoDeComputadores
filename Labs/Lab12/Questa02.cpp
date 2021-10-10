#include <iostream>
using namespace std;

struct palavra
{
	char portugues[25];
	char ingles[25];
	char espanhol[25];
};

int main()
{
	palavra dicionario[10] =
	{
		{"bola", "ball", "pelota"},
		{"futebol", "soccer", "futbol"}
	};

	cout << "digite uma mesma palavra em:\n";
	cout << "portugues: ";
	cin >> dicionario[2].portugues;
	cout << "ingles: ";
	cin >> dicionario[2].ingles;
	cout << "espanhol: ";
	cin >> dicionario[2].espanhol;

	cout << "portugues: " << dicionario[0].portugues << "; ingles: " 
		 << dicionario[0].ingles << "; espanol: " << dicionario[0].espanhol << endl;
	cout << endl;
	cout << "portugues: " << dicionario[1].portugues << "; ingles: "
		<< dicionario[1].ingles << "; espanol: " << dicionario[1].espanhol << endl;
	cout << endl;
	cout << "portugues: " << dicionario[2].portugues << "; ingles: "
		<< dicionario[2].ingles << "; espanol: " << dicionario[2].espanhol << endl;
	
}