#include "Bank.h"
#include <iostream>
using namespace std;

void Bank::accountOptions()
{
	system("cls");
	int option = 0;
	int op = 0;
	double total = 0;
	Bank econ, deb;

	mainMenu();

	while (option != 3)
	{
		cout << "\n Please choose an option: \n";
		cin >> option;
		switch (option)
		{
		case 1:

			debit();

		case 2:

			economy();

		case 3:
			system("cls");
			cout << "From what account do you want to transfer? \n";
			cout << "1. Debit\n";
			cout << "2. Economy\n";
			cout << "3. Exit\n";
			while (op != 3)
			{
				cin >> op;
				switch (op)
				{
				case 1:

					transferToEcon(total);
					cout << endl;
					cout << "Do you want to go back to menu?";

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
					break;
				case 2:
					transferToDebit(total);

					cout << endl;
					cout << "Do you want to go back to menu?";
					char b;
					cin >> b;
					if ((b == 'n') || (b == 'N'))
					{
						cout << "Ok, Bye!";
						exit(0);

					}
					else if ((b == 'y') || (b == 'Y'))
					{

						accountOptions();
					}
					else
					{
						cout << "Not a valid option!";
						secondMenu();
					}
					break;

				case 3:

					exitApp();

				}
			}
			break;

		case 4:

			exitApp();

		default:
			break;
		}
	}
}