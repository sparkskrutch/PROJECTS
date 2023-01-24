#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	bool test = false;
	int num;

	while (test == false)
	{
		cout << "Insira um numero par menor que 100" << endl;
		cin >> num;

		if (num == 0)
		{
			cout << "0 nao e um numero valido";
		}
			
		else if (num >= 100)
		{
			cout << "Digite um numero menor que 100" << endl;
		}
			
		else if (num % 2 != 0)
		{
			cout << "Digite um numero par" << endl;
		}

		else
		{
			test = true;
			cout << "Voce digitou o numero " << num << endl;
		}
	}

	system("pause");
	return 0;
}
