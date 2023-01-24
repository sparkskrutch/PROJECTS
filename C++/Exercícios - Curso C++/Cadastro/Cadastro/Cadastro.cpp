#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {

	char firstname;
	char lastname;
	int m, d, y;
	char separator;

	cout << setw(50) << "Registration" << endl;
	
	cout << "First Name: ";
	cin >> firstname;

	cout << "Birthday: ";
	cin >> m >> separator >> d >> separator >> y;

	cout << "Birthday: " << m << separator << d << separator << y << endl;


	system("pause");
	return 0;
}