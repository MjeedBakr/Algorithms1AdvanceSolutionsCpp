#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

int readMark()
{
	short mark;
	cout << "Please Enter your mark? " << endl;

	cin >> mark;
	return mark;
}

enPassFail checkMark(short mark)
{
	if (mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void printResult(int mark)
{
	if (checkMark(mark) == enPassFail::Pass)
		cout << "You Passed" << endl;
	else
		cout << "You Faild" << endl;
}
int main()
{
	printResult(readMark());
}
