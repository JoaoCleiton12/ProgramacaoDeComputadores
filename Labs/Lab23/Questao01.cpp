#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char palavras[50];
    char palavra1[10];
    
	ifstream fin;
    ofstream fout;
    fout.open("codigofonte_m.cpp");
	fin.open("codigofonte.cpp");
    if (!fin.is_open())            // a abertura do arquivo falhou
    {
        cout << "A abertura do arquivo codigofonte falhou!" << endl;
        cout << "Programa encerrando.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    
    fout << "//" << "codigofonte_m.cpp\n";
    fout << "#define print cout\n";

    //copia tudo do do arquivo"codigofonte.cpp" para o arquivo "codigofonte_m.cpp".
    fin.getline(palavras, 50);
    while (!fin.eof())
    {
        fout << palavras << endl;
        fin.getline(palavras, 50);
    }

    fout << "}";
    cout << "pronto!\n";

    fout.close();
    fin.close();



    /* Professor, para mudar o cout para print tentei fazer deste modo
    *****************************************
    fin.getline(palavras, 50);
    fin >> palavra1;
    while (!fin.eof())
    {
        if (strcmp(palavra1, "cout"))
        {
            fout << "print ";
        }
        else
        {
            fout << palavras << endl;
        }
        fin.getline(palavras, 50);
        fin >> palavra1;
        
    }
    ******************************************
    
   
    porém quando executei ele substituiu várias palavras por print
    
    <execução deste codigo>
    **********************************
             //codigofonte_m.cpp
        #define print cout
        print 
        print 
        print 
        print 
         num = 5;
        print 
        }
    **********************************
    
    */
}