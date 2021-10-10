#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Inicializar();
void ligar();
void verificar();
void ativar();

int main()
{
	Inicializar();
}

void Inicializar()
{
	cout << "inicializando sistema:\n";
	cout << endl;
	ligar();
	verificar();
	ativar();
	cout << "Inicializacao concluida.\n";
	cout << endl;
	 
	srand(time(NULL));
	int numero;

	numero = rand();
	if (numero > 16384)
	{
		cout << "Sistema em funcionamento";
	}

	else
	{
		cout << "Falha na inicializacao\n ";
	}
	
	//se colocar o cout << numero; vai ver que os numeros variam, porem a variação ocorre de pouco
	// entao pode acontecer de ficar muito tempo dando so um dos resultados.
}

void ligar()
{
	cout << "- Ligando dispositivos\n";
}

void verificar()
{
	cout << "- Verificando integridade\n";
}

void ativar()
{
	cout << "- Ativando processos\n";
}