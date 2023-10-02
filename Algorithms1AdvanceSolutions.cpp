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

strucTaskDuration readTaskDuration()
{
	strucTaskDuration taskDuration;
	taskDuration.numberOfDays = readPositiveNumber("Enter number of days: ");
	taskDuration.numberOfHours = readPositiveNumber("Enter number of hours: ");
	taskDuration.numberOfMinutes = readPositiveNumber("Enter number of minutes: ");
	taskDuration.numberOfSeconds = readPositiveNumber("Enter number of seconds: ");

	return taskDuration;
}

int taskDurationInSeconds(strucTaskDuration taskDuration)
{
	int durationInSeconds = 0;

	durationInSeconds = taskDuration.numberOfDays * 24 * 60 * 60;
	durationInSeconds += taskDuration.numberOfHours * 60 * 60;
	durationInSeconds += taskDuration.numberOfMinutes * 60;
	durationInSeconds += taskDuration.numberOfSeconds;

	return durationInSeconds;
}

int main()
{
	cout << "Task Duration In Seconds: " << taskDurationInSeconds(readTaskDuration());
	cout << endl;


	return 0;
}
