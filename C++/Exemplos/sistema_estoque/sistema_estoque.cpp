#include<iostream>
#include<stdlib.h>
using namespace std;

string estoque[10] = { "porca", "parafuso", "arruela" };
char repeticao[10] = "sim";
char repeticao2[10] = "nao";
bool teste = false;
char item[10];

void incluir_item()
{
	cout << "Qual item deseja incluir? ";
	cin >> item;
	estoque[0] = item;
}


int main()
{
	incluir_item();
	cout <<  << endl;

	system("pause");
	return 0;
}