#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char data1[25];
	char data2[25];
	char data3[25];
	char veto1[70];
	string teste = "natal";
	
	cout << "Quais suas datas comemorativas preferidas?\n";

	cin.getline(data1, 20);
	cin.getline(data2, 20);
	cin.getline(data3, 20);

	
	strcpy(veto1, data1);
	strcat(veto1, ", ");
	strcat(veto1, data2);
	strcat(veto1, " e ");
	strcat(veto1, data3);


	cout << veto1 << " sao belas festas.\n";
	if (teste == data1)
	{
		cout << "O Natal tambem e uma das minhas datas preferidas!\n";
	}
	if (teste == data2)
	{
		cout << "O Natal tambem e uma das minhas datas preferidas!\n";
	}
	if (teste == data3)
	{
		cout << "O Natal tambem e uma das minhas datas preferidas!\n";
	}



	
}