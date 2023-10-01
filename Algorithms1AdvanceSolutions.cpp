#include <iostream>
#include <string>
using namespace std;

enum enOperationType { Add = '+', Subtract = 'B', Multiply = '*', Divide = '/' };

float readNumber(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;

	return number;
}

enOperationType readOpType()
{
	char op = '+';

	cout << "Please enter poeration type ( +, -, *, /, ): ";
	cin >> op;

	return (enOperationType)op;
}

float calculate(float number1, float number2, enOperationType opType)
{
	switch (opType)
	{
	case enOperationType::Add:
		return number1 + number2;
	case enOperationType::Subtract:
		return  number1 - number2;
	case enOperationType::Multiply:
		return number1 * number2;
	case enOperationType::Divide:
		return number1 / number2;
	default:
		return number1 + number2;
	}
}

int main()
{
	float number1 = readNumber("Please enter the first numberr: ");
	float number2 = readNumber("Please enter the second number: ");

	enOperationType opType = readOpType();

	cout << "Result = " << calculate(number1, number2, opType);
	return 0;
}
