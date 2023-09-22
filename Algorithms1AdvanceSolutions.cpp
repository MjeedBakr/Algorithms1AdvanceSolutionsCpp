#include <iostream>

using namespace std;

struct stInfo
{
	short age;
	bool hasDrivingLicense;
	bool hasRecommendation;
};

stInfo readInfo()
{
	stInfo info;

	cout << "Enter your age? \n";
	cin >> info.age;
	cout << "Do you have a driving licence? \n";
	cin >> info.hasDrivingLicense;
	cout << "Do you have Recommendation? \n";
	cin >> info.hasRecommendation;

	return info;
}

bool isAccepted(stInfo info)
{
	if (info.hasRecommendation)
		return true;
	else
		return (info.age > 21 && info.hasDrivingLicense);
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
