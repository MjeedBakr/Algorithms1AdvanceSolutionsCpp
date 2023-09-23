#include <iostream>

using namespace std;

struct stInfo
{
	string firstName;
	string lastName;
};

stInfo readInfo()
{
	stInfo info;

	cout << "Enter your first name: \n";
	cin >> info.firstName;
	cout << "Enter your last name: \n";
	cin >> info.lastName;

	return info;
}

string getFullName(stInfo info, bool isReversed)
{
	if (isReversed)
		return info.lastName + " " + info.firstName;
	else
		return info.firstName + " " + info.lastName;
}

void printFullName(string fullName)
{
	cout << "Your full name is: " << fullName << endl;
}
int main()
{
	printFullName(getFullName(readInfo(), false));
	printFullName(getFullName(readInfo(), true));
}
