#include <iostream>
#include <string>
using namespace std;

enum enMonthOfYear {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5,
					Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10,
					Nov = 11, Dec = 12};

int readNumberInRange(string message, int start, int end)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < start || number > end);

	return number;
}

enMonthOfYear readMonthOfYear()
{
	return (enMonthOfYear)readNumberInRange("Please enter month number 1-12: ", 1, 12);
}

string getMonthOfYear(enMonthOfYear month)
{
	switch (month)
	{
	case Jan:
		return "January";
	case Feb:
		return "Feburary";
	case Mar:
		return "March";
	case Apr:
		return "April";
	case May:
		return "May";
	case Jun:
		return "Jun";
	case Jul:
		return "July";
	case Aug:
		return "August";
	case Sep:
		return "September";
	case Oct:
		return "October";
	case Nov:
		return "November";
	case Dec:
		return "December";
	default:
		return "Invalid month number";
	}
}

int main()
{

	cout << getMonthOfYear(readMonthOfYear()) << endl;

	return 0;
}
