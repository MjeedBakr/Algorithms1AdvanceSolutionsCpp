#include <iostream>
#include <string>
using namespace std;

struct strucPiggyBankContent 
{
	int pennies, nickels, dimes, quarters, dollars;
};

strucPiggyBankContent readPiggyBankContent()
{
	strucPiggyBankContent piggyBankContent;

	cout << "Please enter total pennies: " << endl;
	cin >> piggyBankContent.pennies;

	cout << "Please enter total nickels: " << endl;
	cin >> piggyBankContent.nickels;

	cout << "Please enter total dimes: " << endl;
	cin >> piggyBankContent.dimes;

	cout << "Please enter total quarters: " << endl;
	cin >> piggyBankContent.quarters;

	cout << "Please enter total dollars: " << endl;
	cin >> piggyBankContent.dollars;

	return piggyBankContent;;
}

int calcTotalPennies(strucPiggyBankContent piggyBankContent)
{
	int totalPennies;

	totalPennies = piggyBankContent.pennies * 1
		+ piggyBankContent.nickels * 5
		+ piggyBankContent.dimes * 10
		+ piggyBankContent.quarters * 25
		+ piggyBankContent.dollars * 100;

	return totalPennies;
}
int main()
{
	int totalPennies = calcTotalPennies(readPiggyBankContent());

	cout << endl << "Total Pennies = " << totalPennies << endl;
	cout << endl << "Total Dollars = " << (float)totalPennies / 100 << endl;

	return 0;
}
