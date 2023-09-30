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

void printRangeFromNto1_usingWhile(int N)
{
	int counter = N + 1;

	cout << "Range using while statement: \n";
	while (counter > 1)
	{
		counter--;
		cout << counter << endl;
	}
}

void printRangeFromNto1_usingDoWhile(int N)
{
	int counter = N + 1;
	cout << "Range using do..while statement: \n";

	do
	{
		counter--;
		cout << counter << endl;

	} while (counter > 1);
}

void printRangeFromNto1_usingFor(int N)
{
	cout << "Range using for loop statement: \n";

	for (int counter = N; counter >= 1; counter--)
		cout << counter << endl;
}

int main()
{
	int N = readNumber();
	printRangeFromNto1_usingWhile(N);
	printRangeFromNto1_usingDoWhile(N);
	printRangeFromNto1_usingFor(N);


	return 0;
}
