#include <iostream>
#include <string>
using namespace std;

int readNumber()
{
	int number;
	cout << "Please enter your number: ";
	cin >> number;

	return number;
}

void printRangeFrom1ToN_usingWhile(int N)
{
	int counter = 0;

	cout << "Range using while statement: \n";
	while (counter < N)
	{
		counter++;
		cout << counter << endl;
	}
}

void printRangeFrom1ToN_usingDoWhile(int N)
{
	int counter = 0;
	cout << "Range using do while statement: \n";

	do
	{
		counter++;
		cout << counter << endl;

	} while (counter < N);
}

void printRangeFrom1ToN_usingFor(int N)
{
	cout << "Range using for loop statement: \n";

	for (int counter = 1; counter <= N; counter++)
		cout << counter << endl;
}

int main()
{
	int N = readNumber();
	printRangeFrom1ToN_usingWhile(N);
	printRangeFrom1ToN_usingDoWhile(N);
	printRangeFrom1ToN_usingFor(N);


	return 0;
}
