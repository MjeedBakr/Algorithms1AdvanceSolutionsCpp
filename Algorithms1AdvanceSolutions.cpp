#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message)
{
	int number;
	do
	{
	cout << message;
	cin >> number;
	} while (number < 0);

	return number;
}

int factorial(int N)
{
	int F = 1;
	for (int counter = N; counter >= 1; counter--)
		F = F * counter;

	return F;
}



int main()
{
	cout << "Factorial = " << factorial(readPositiveNumber("Enter a positive number: "));


	return 0;
}
