#include<iostream>
#include<algorithm> // Funcao .find.
#include<vector> // Vetores s'ao arrays dynamicos.
using namespace std;

vector<string> estoque = { "porca", "parafuso", "arruela" };
string resposta = "Sim";
bool teste = false;
string item;

void incluir_item()
{
	cout << "Qual item deseja incluir? ";
	cin >> item;
	estoque.push_back(item); //usar push_back para adicionar item no final do vector.
}

void deletar_item()
{
	cout << "Qual item deseja deletar? ";
	cin >> item;
	
	//Procurar por item no vector e apagar.
	auto it = find(estoque.begin(), estoque.end(), item);
	if (it != estoque.end()) {
		estoque.erase(it);
	} else {
		cout << "Item n'ao encontrado." <<endl;
	}
}

void imprimir_estoque()
{
	for(const auto& item : estoque) {
	cout << item << endl;
	}
}

void sair()
{
	cout << "Pressione Enter para sair..." << endl;
	cin.ignore();
	cin.get();
}


int main()
{
	imprimir_estoque();

	incluir_item();
	cout << "" << endl;

	imprimir_estoque();

	cout << "Deseja excluir algum item?" << endl;
	cin >> resposta;

	if(resposta == "sim") {
		deletar_item();
		imprimir_estoque();
		sair();
	} else {
		imprimir_estoque();
		sair();
	}

	
	return 0;
}