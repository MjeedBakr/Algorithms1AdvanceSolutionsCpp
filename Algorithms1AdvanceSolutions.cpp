#include <iostream>

using namespace std;

void readNumbers(int& num1, int& num2, int &num3)
{
	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;
	cout << "Enter your third number: ";
	cin >> num3;
}

int sumOf3Numbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

int averageOf3Numbers(int num1, int num2, int num3)
{
	return (float)sumOf3Numbers(num1, num2, num3) / 3;
}

void printResult(int sum)
{
	cout << "\nThe average of 3 numbers = " << sum << endl;
}

int main()
{
	int num1, num2, num3;
	readNumbers(num1, num2, num3);
	printResult(averageOf3Numbers(num1, num2, num3));
}
