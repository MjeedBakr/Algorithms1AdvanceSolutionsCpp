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

float hoursToDays(float numberOfHours)
{
	return (float)numberOfHours / 24;
}

float hoursToWeeks(float numberOfHours)
{
	return (float)numberOfHours / 24 / 7;
}

float daysToWeeks(float numberOfDays)
{
	return (float)numberOfDays / 7;
}

int main()
{
	float numberOfHours = readPositiveNumber("Please enter the number of hours: ");
	float numberOfDays = hoursToDays(numberOfHours);
	float numberOfWeeks = hoursToWeeks(numberOfHours);

	cout << endl;
	cout << "Total Hours = " << numberOfHours << endl;
	cout << "Total Days = " << numberOfDays << endl;
	cout << "Total Weeks = " << numberOfWeeks << endl;



	return 0;
}
