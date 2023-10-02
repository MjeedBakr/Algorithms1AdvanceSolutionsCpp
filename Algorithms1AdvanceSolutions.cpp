#include <iostream>
#include <string>
using namespace std;

struct strucTaskDuration
{
	int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;
};

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

strucTaskDuration secondsToTaskDuration(int totalSeconds)
{
	strucTaskDuration taskDuration;
	const int secondsPerDay = 24 * 60 * 60;
	const int secondsPerHour = 60 * 60;
	const int secondsPerMinute = 60;

	int remainder = 0;
	taskDuration.numberOfDays = floor(totalSeconds / secondsPerDay);
	remainder = totalSeconds % secondsPerDay;
	taskDuration.numberOfHours = floor(remainder / secondsPerHour);
	remainder = remainder % secondsPerHour;
	taskDuration.numberOfMinutes = floor(remainder / secondsPerMinute);
	remainder = remainder % secondsPerMinute;
	taskDuration.numberOfSeconds = remainder;

	return taskDuration;
}

void printTaskDurationDetails(strucTaskDuration taskDuration)
{
	cout << endl;
	cout << taskDuration.numberOfDays << ":"
		<< taskDuration.numberOfHours << ":"
		<< taskDuration.numberOfMinutes << ":"
		<< taskDuration.numberOfSeconds << endl;
}

int main()
{
	int totalSeconds = readPositiveNumber("Please enter the number of seconds: ");
	printTaskDurationDetails(secondsToTaskDuration(totalSeconds));


	return 0;
}
