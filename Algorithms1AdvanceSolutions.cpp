#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

void readNumbers(int& mark1, int& mark2, int &mark3)
{
	cout << "Enter your first mark: ";
	cin >> mark1;
	cout << "Enter your second mark: ";
	cin >> mark2;
	cout << "Enter your third mark: ";
	cin >> mark3;
}

int sumOf3Marks(int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}

int clacAverage(int mark1, int mark2, int mark3)
{
	return (float)sumOf3Marks(mark1, mark2, mark3) / 3;
}

enPassFail checkAverage(float average)
{
	if (average > 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResult(int average)
{
	cout << "\nThe average of 3 marks is = " << average << endl;

	if (checkAverage(average) == enPassFail::Pass)
		cout << "You Passed!" << endl;
	else
		cout << "You Failed." << endl;
}

int main()
{
	int mark1, mark2, mark3;
	readNumbers(mark1, mark2, mark3);
	printResult(clacAverage(mark1, mark2, mark3));
}
