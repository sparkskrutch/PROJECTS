#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main() {

	char nome[250], logradouro[250], bairro[250], cidade[250];
	int numero[250], cpf[250], rg [250];

	cout << "Cadastro" << endl;
	cout << endl;
	cout << "Informe seus dados." << endl;
	cout << "Nome: ";
	cin >> nome;
	cout << "Logradouro: ";
	cin >> logradouro;
	cout << "Número: ";
	cin >> numero;
	cout << "Bairro: ";
	cin >> bairro;
	cout << "Cidade: ";
	cin >> cidade;
	cout << "CPF: ";
	cin >> cpf;
	cout << "RG: ";
	cin >> rg;




	system("pause");
	return 0;
}