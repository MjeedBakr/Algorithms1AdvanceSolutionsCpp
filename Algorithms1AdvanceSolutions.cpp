#include <iostream>
#include <string>

using namespace std;

int readNumber()
{
	int number;
	cout << "Enter a number: \n";
	cin >> number;

	return number;
}

float calcHalfNumber(int number)
{
	return (float)number / 2;
}

void printResult(int number)
{
	string result = "Half of " + to_string(number) + " is " + to_string(calcHalfNumber(number));
	cout << result << endl;
}
int main()
{
	printResult(readNumber());
}
