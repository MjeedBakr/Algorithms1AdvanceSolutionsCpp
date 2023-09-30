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

void printResult(int age)
{
	if (validateNumberInRange(age, 18, 65))
		cout << age << " is a valid age";
	else
		cout << age << " is invalid age";
}

int main()
{
	printResult(readAge());
	return 0;
}
