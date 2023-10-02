#include <iostream>
#include <string>
using namespace std;

float readPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float calcReminder(float totalBill, float totalCashPaid)
{
	return totalCashPaid - totalBill;
}

int main()
{
	float totalBill = readPositiveNumber("Please enter the total bill: ");
	float totalCashPaid = readPositiveNumber("Please enter total cash paid");

	cout << endl;
	cout << "Total Bill = " << totalBill << endl;
	cout << "Total Cash Paid = " << totalCashPaid << endl;

	cout << "********************\n";
	cout << "Remainder = " << calcReminder(totalBill, totalCashPaid) << endl;

	return 0;
}
