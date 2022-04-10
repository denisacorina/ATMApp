#include "Bank.h"
#include <iostream>
using namespace std;


int Bank::checkPinn(int PIN)
{
	int max_tries = 3;

	for (int i = 0; i < max_tries + 1; i++)
	{
		cout << "\nEnter PIN: ";
		cin >> PIN;

		if (PIN == 4321 || PIN == 7777)
		{
			cout << "PIN correct\n";
			break;


		}
		else if (i < max_tries - 1)
		{
			cout << "PIN incorrect. Please try again. " << endl;
			cout << max_tries - i - 1 << " times left.\n" << endl;

		}
		else
		{
			cout << "PIN incorrect. Card Blocked." << endl;
			return EXIT_SUCCESS;
		}
	}
}

void Bank::economy()
{
	system("cls");
	int option = 0;
	int PIN = 0;
	bool verifyPin = false;

	secondMenu();

	while (option != 6)
	{
		cout << "\n  Please choose an option for your ECONOMY account: \n";
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "\nYour Balance in your account is: $" << this->balanceEcon << endl;

			break;

		case 2:

			cout << "\nAmount you want to deposit: $";
			cin >> this->depositEcon;
			this->balanceEcon += this->depositEcon;
			cout << "\nCurrent Balance: $" << this->balanceEcon << endl;
			break;

		case 3: cout << "\nHow much do you want to withdraw?: $";
			cin >> this->withdrawEcon;

			if (this->balanceEcon < this->withdrawEcon)
				cout << "\nYou don't have enough money in your account to withdraw" << endl;
			else
				this->balanceEcon -= this->withdrawEcon;

			cout << "\nCurrent Balance: $" << this->balanceEcon << endl;
			break;

		case 4:
			
			verifyPin = checkPinn(PIN);

			if (verifyPin)
			{
				debit();
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

void Bank::transferToEcon(double total)
{
	system("cls");
	cout << "Balance right now: \n";
	cout << "Debit: " << this->balanceDeb << endl;
	cout << "Economy: " << this->balanceEcon << endl;
	cout << "Enter total amount which you want to transfer from debit account to economy account: ";
	cin >> total;

	if (total > this->balanceDeb || this->balanceDeb == 0)
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
			cout << "Not a valid option!";
			secondMenu();
		}

	}
	else
	{
		double newDeb = this->balanceDeb - total;
		double newEcon = this->balanceEcon + total;
		cout << "Debit: " << newDeb << endl;
		cout << "Economy: " << newEcon << endl;
		this->balanceDeb = newDeb;
		this->balanceEcon = newEcon;
	}
}