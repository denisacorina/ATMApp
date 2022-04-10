#include "Bank.h"
#include <iostream>
using namespace std;


void Bank::mainMenu()
{
	system("cls");
	cout << "\n1. Debit";
	cout << "\n2. Economy";
	cout << "\n3. Transfer";
	cout << "\n4. Exit";
}

void Bank::secondMenu()
{
	system("cls");
	cout << "\n1. Check Balance";
	cout << "\n2. Deposit";
	cout << "\n3. Withdraw";
	cout << "\n4. Change account";
	cout << "\n5. Back to main menu";
	cout << "\n6. Exit";
}