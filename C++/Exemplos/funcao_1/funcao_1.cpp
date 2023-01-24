#include <iostream>
#include <stdlib.h>
using namespace std;

void soma()
{
	int num1;
	int num2;

	cout << "NUM1: ";
	cin >> num1;
	cout << "NUM2: ";
	cin >> num2;

	cout << "Resultado: " << num1 + num2 << endl;
}

int main()
{
	soma();

	system("pause");
	return 0;
}