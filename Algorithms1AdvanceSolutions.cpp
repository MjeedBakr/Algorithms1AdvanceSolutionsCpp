#include <iostream>

using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int readNumber()
{
	int number;

	cout << "Please enter a number: " << endl;
	cin >> number;

	return number;
}

enNumberType checkNumberType(int number)
{
	if (number % 2 == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void printNumberType(enNumberType numberType)
{
	if (numberType == enNumberType::Even)
		cout << "The number is Even. \n";
	else
		cout << "The number is Odd. \n";
}

int main()
{
	printNumberType(checkNumberType(readNumber()));
}
