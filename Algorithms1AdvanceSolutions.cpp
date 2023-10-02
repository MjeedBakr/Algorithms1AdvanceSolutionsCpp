#include <iostream>
#include <string>
using namespace std;

enum enWeekDays {Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};

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

enWeekDays readDayOfWeek()
{
	return (enWeekDays)readNumberInRange("Please enter day number: ", 1, 7);
}

string getDayOfWeek(enWeekDays day)
{
	switch (day)
	{
	case Sat:
		return "Saturady";
	case Sun:
		return "Sunday";
	case Mon:
		return "Monday";
	case Tue:
		return "Tuesday";
	case Wed:
		return "Wednesday";
	case Thu:
		return "Thursday";
	case Fri:
		return "Friday";
	default:
		return "Invvalid Day";
	}
}

int main()
{

	cout << getDayOfWeek(readDayOfWeek()) << endl;

	return 0;
}
