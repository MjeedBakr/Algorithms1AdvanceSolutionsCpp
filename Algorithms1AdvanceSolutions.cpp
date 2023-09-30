#include <iostream>
#include <string>
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};
int readNumber()
{
	int number;
	cout << "Please enter your number: ";
	cin >> number;

	return number;
}

enOddOrEven checkOddOrEven(int number)
{
	if (number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

int sumOddNumbersFrom1ToN_usingWhile(int N)
{
	int counter = 0;
	int sum = 0;

	cout << "Sum using while statement: \n";
	while (counter < N)
	{
		counter++;
		if (checkOddOrEven(counter) == enOddOrEven::Odd)
			sum += counter;
	}
	return sum;
}

int sumOddNumbersFrom1ToN_usingDoWhile(int N)
{
	int counter = 0;
	int sum = 0;
	cout << "sum using do..while statement: \n";

	do
	{
		counter++;
		if (checkOddOrEven(counter) == enOddOrEven::Odd)
			sum += counter;

	} while (counter < N);
	return sum;
}

int sumOddNumbersFrom1ToN_usingFor(int N)
{
	cout << "sum using for loop statement: \n";
	int sum = 0;
	for (int counter = 1; counter <= N; counter++)
	{
		if (checkOddOrEven(counter) == enOddOrEven::Odd)
			sum += counter;
	}
	return sum;
}

int main()
{
	int N = readNumber();

	cout << sumOddNumbersFrom1ToN_usingWhile(N) << endl;
	cout << sumOddNumbersFrom1ToN_usingDoWhile(N) << endl;
	cout << sumOddNumbersFrom1ToN_usingFor(N) << endl;


	return 0;
}
