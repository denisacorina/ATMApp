#include "Bank.h"
#include <iostream>
using namespace std;

void Bank::exitApp()
{
	system("cls");
	char x;
	cout << "Are you sure you want to exit? (y/n)\n";
	cin >> x;
	if ((x == 'n') || (x == 'N'))
	{
		secondMenu();

	}
	else if ((x == 'y') || (x == 'Y'))
	{
		cout << "Ok, Bye!";
		exit(0);
	}
	else
	{
		cout << "Not a valid option!";
		secondMenu();
	}
}