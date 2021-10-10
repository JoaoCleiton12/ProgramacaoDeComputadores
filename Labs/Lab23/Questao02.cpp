#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

int verificapalavra(char palavra[], int cont);

int main()
{
	ifstream fin;
	fin.open("palindromo.txt");
    if (!fin.is_open())            // a abertura do arquivo falhou
    {
        cout << "A abertura do arquivo palindromo.txt falhou!" << endl;
        cout << "Programa encerrando.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    int valor = 0;
    int cont = 0;
    char palavra[20];
    fin >> palavra;
    while (!fin.eof())
    {
        for (int i = 0; palavra[i]; i++)
        {
            palavra[i] = tolower(palavra[i]);
        }
        valor = verificapalavra(palavra, cont);
        if (valor == 0)
        {
            cout << palavra << endl;
            cont++;
        }
        fin >> palavra;
    }
    cout << "foram encontrados " << cont << " palindromos.\n";
	fin.close();

}
int verificapalavra(char palavra[], int cont)
{
    int valor;
    char inversa[20];
    strcpy(inversa, palavra);
    _strrev(inversa);
    valor = strcmp(palavra, inversa);
    return valor;
}