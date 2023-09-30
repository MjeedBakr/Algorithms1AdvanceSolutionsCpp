#include <iostream>
#include <string>
using namespace std;

int readAge()
{
	short age;
	cout << "Please enter your age: ";
	cin >> age;

	return (int)age;
}

bool validateNumberInRange(int number, int from, int to)
{
	return (number >= from && number <= to);
}

int readUntilAgeBetween(int from, int to)
{
	int age = 0;

	do
	{
		age = readAge();

	} while (!validateNumberInRange(age, from, to));

	return age;
}

void printResult(int age)
{
	if (validateNumberInRange(age, 18, 65))
		cout << age << " is a valid age";
	else
		cout << age << " is invalid age";
}

int main()
{
	printResult(readUntilAgeBetween(18, 45));
	return 0;
}
