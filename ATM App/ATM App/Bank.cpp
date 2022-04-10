#include "Bank.h"

Bank::Bank()
{
	depositDeb = 0;
	withdrawDeb = 0;
	balanceDeb = 0;
	depositEcon = 0;
	withdrawEcon = 0;
	balanceEcon = 0;

};

Bank::Bank(double depositDeb, double withdrawDeb, double balanceDeb, double depositEcon, double withdrawEcon, double balanceEcon)
{
	this->depositDeb = depositDeb;
	this->withdrawDeb = withdrawDeb;
	this->balanceDeb = balanceDeb;
	this->depositEcon = depositEcon;
	this->withdrawEcon = withdrawEcon;
	this->balanceEcon = balanceEcon;
};


