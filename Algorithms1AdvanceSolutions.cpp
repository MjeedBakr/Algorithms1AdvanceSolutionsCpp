#include <iostream>

using namespace std;

void readNumbers(int& num1, int& num2, int& num3)
{
	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;
	cout << "Enter your third number: ";
	cin >> num3;

}

int maxOf3Numbers(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else
			return num3;
	else
		if (num2 > num3)
			return num2;
		else
			return num3;
}

void printResult(int maxNumber)
{
	cout << "The maximun number is: " << maxNumber << endl;
}

int main()
{
	int num1, num2, num3;
	readNumbers(num1, num2, num3);
	printResult(maxOf3Numbers(num1, num2, num3));
}
