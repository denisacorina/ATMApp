#pragma once
class Bank
{
private:

	double depositDeb, withdrawDeb, balanceDeb, depositEcon, withdrawEcon, balanceEcon;
public:
	Bank();
	Bank(double depositDeb, double withdrawDeb, double balanceDeb, double depositEcon, double withdrawEcon, double balanceEcon);
	void mainMenu();
	void secondMenu();
	void debit();
	void transferToDebit(double total);
	int checkPinn(int PIN);
	void economy();
	void transferToEcon(double total);
	void accountOptions();
	void exitApp();
};

