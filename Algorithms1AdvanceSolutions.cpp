#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float totalMonths(float loanAmount, float monthlyInsallment)
{
	return (float)loanAmount / monthlyInsallment;
}

int main()
{
	float loanAmount = readPositiveNumber("Please enter loan amount: ");
	float monthlyInstallment = readPositiveNumber("Please enter monthly installment: ");

	cout << "Total months to pay = " << totalMonths(loanAmount, monthlyInstallment) << endl;
	return 0;
}
