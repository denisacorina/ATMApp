#include <iostream>   

#include "Bank.h"

using namespace std;

void start();
int checkPin(int PIN);

int main()
{
	Bank op;
	int PIN = 0;

	start();
	checkPin(PIN);
	op.accountOptions();

	return 0;
}


void start()
{
	cout << "\n************************************************************************************************************";
	cout << "\n************************************************************************************************************";
	cout << "\n************************************************************************************************************";
	cout << "\n*****************************************    WELCOME TO THE BANK    ****************************************";
	cout << "\n************************************************************************************************************";
	cout << "\n************************************************************************************************************";
	cout << "\n\n";
	cout << "\n*******************************      PIN FOR TRYING THE APP: 4321 / 7777      ******************************";

	cout << "\n\n";

}



int checkPin(int PIN)
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