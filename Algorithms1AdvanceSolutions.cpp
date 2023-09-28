#include <iostream>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

void readNumbers(int& num1, int& num2)
{
	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;

}

int maxOf2Numbers(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void printResult(int maxNumber)
{
	cout << "The maximun number is: " << maxNumber << endl;
}

int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	printResult(maxOf2Numbers(num1, num2));
}
