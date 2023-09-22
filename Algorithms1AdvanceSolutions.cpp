#include <iostream>

using namespace std;

struct stInfo
{
	short age;
	bool hasDrivingLicense;
};

stInfo readInfo()
{
	stInfo info;

	cout << "Enter your age? \n";
	cin >> info.age;
	cout << "Do you have a driving licence? \n";
	cin >> info.hasDrivingLicense;

	return info;
}

bool isAccepted(stInfo info)
{
	return (info.age >= 21 && info.hasDrivingLicense);
}

void printResult(stInfo info)
{
	if (isAccepted(info))
		cout << "Hired." << endl;
	else
		cout << "Rejected." << endl;
}

int main()
{
	printResult(readInfo());
}
