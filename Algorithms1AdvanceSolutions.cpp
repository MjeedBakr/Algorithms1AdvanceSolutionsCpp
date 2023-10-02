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

float monthlyInstallment(float loanAmount, float numberOfMonth)
{
	return (float)loanAmount / numberOfMonth;
}

int main()
{
	float loanAmount = readPositiveNumber("Please enter loan amount: ");
	float numberOfMonths = readPositiveNumber("How many months: ");

	cout << "monthly installment = " << monthlyInstallment(loanAmount, numberOfMonths) << endl;
	return 0;
}
