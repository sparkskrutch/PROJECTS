#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int people;
    bool smoker;
    bool pets;

    cout << "Ola, bem-vindo ao Restaurante Ratatouille" << endl;
    cout << endl;
    cout << "Por favor, responda o questionário para encontrarmos o melhor local para desfrutar das nossas refeições." << endl;
    cout << endl;

    cout << "Quantas pessoas sao? ";
    cin >> people;

    cout << "Alguem e fumante? (0-Nao/ 1-Sim) ";
    cin >> smoker;

    cout << "Esta com algum animal? (0-Nao/ 1-Sim) ";
    cin >> pets;

    if (people >= 5)
    {
        cout << "O melhor local e: Andar 1" << endl;
    }
    else if (smoker == 1)
    {
        cout << "O melhor local e: Area Externa" << endl;
    }
    else if (pets == 1)
    {
        cout << "O melhor local e: Area Externa" << endl;
    }
        
        
    
    else
    {
        cout << "O melhor local e: Terreo" << endl;
    }


    system("pause");
    return 0;
}