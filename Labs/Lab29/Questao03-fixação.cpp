#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct letras
{
	char* str; // ponteiro para a string
	int comp; // comprimento da string (sem contar '\0')
};
// prot�tipos para ajustar(), mostrar() e mostrar()
void ajustar(letras& string, char vetor[]);
void mostrar(letras& string, int membro);
void mostrar(const char* str, int membro);


int main()
{
	letras msg;
	char teste[] = "Realidade de ponteiros e strings\n";

	ajustar(msg, teste);	 // primeiro argumento � uma refer�ncia
							 // aloca espa�o para guardar c�pia de teste
							 // ajusta o membro str de msg para apontar
					         // para novo bloco, copia teste para o novo
						    // bloco e ajusta o membro comp
	mostrar(msg);			// mostra o membro string uma vez
	mostrar(msg, 2);		// mostra o membro string duas vezes
	teste[0] = 'D';
	teste[1] = 'u';
	mostrar(teste);			// mostra a string uma vez
	mostrar(teste, 3);		// mostra a string tr�s vezes
	mostrar("Pronto!");
	delete[] msg.str;
	return 0;
}
void ajustar(letras& string, char vetor[])
{
	string.comp = strlen(vetor);
	string.str = new char[string.comp + 1];
	strcpy(string.str, vetor);
}

void mostrar(letras& string, int n)
{
	for (int i = 0; i < n; ++i)
		cout << string.str;
}

void mostrar(const char* str, int membro)
{
	for (int i = 0; i < membro; ++i)
	{
		cout << str;
	}
}

