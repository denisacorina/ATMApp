#include "Bank.h"
#include <iostream>
using namespace std;

void Bank::debit()
{	
	system("cls");
	int option = 0;
	int PIN = 0;
	bool verifyPin = false;

	secondMenu();

	while (option != 6)
	{
		cout << "\n  Please choose an option for your DEBIT account: ";
		cin >> option;
		switch (option)
		{
		case 1:

			cout << "\nYour Balance in your account is: $" << this->balanceDeb << endl;
			break;

		case 2:

			cout << "\nAmount you want to deposit: $";
			cin >> this->depositDeb;
			this->balanceDeb += this->depositDeb;
			cout << "\nCurrent Balance: $" << this->balanceDeb << endl;
			break;

		case 3: 
			
			cout << "\nHow much do you want to withdraw?: $";
			cin >> this->withdrawDeb;

			if (this->balanceDeb < this->withdrawDeb)
				cout << "\nYou don't have enough money in your account to withdraw." << endl;
			else
				this->balanceDeb -= this->withdrawDeb;

			cout << "\nCurrent Balance: $" << this->balanceDeb << endl;
			break;

		case 4:
			verifyPin = checkPinn(PIN);

			if (verifyPin)
			{
				economy();
			}
			else
			{
				exit(0);
			}
		case 5:

			accountOptions();

		case 6:

			exitApp();
			break;

		default:
			cout << option << " Is not a valid choice, please try again\n";
		}

	}
}

void Bank::transferToDebit(double total)
{
	system("cls");
	cout << "Balance right now: \n";
	cout << "Debit: " << this->balanceDeb << endl;
	cout << "Economy: " << this->balanceEcon << endl;
	cout << "Enter total amount which you want to transfer from economy account to debit account: \n";
	cin >> total;

	if (total > this->balanceEcon || this->balanceEcon == 0)
	{
		cout << "Insuficient funds! Do you want to try again?\n";

		char x;
		cin >> x;
		if ((x == 'n') || (x == 'N'))
		{
			cout << "Ok, Bye!";
			exit(0);

		}
		else if ((x == 'y') || (x == 'Y'))
		{
			accountOptions();
		}
		else
		{
			cout << "Not a valid option!\n";
			secondMenu();
		}

	}
	else
	{
		double newEcon = this->balanceEcon - total;
		double newDeb = this->balanceDeb + total;
		cout << "Debit: " << newDeb << endl;
		cout << "Economy: " << newEcon << endl;
		this->balanceDeb = newDeb;
		this->balanceEcon = newEcon;
	}
}