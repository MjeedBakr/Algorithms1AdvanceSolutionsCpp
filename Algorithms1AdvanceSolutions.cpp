#include <iostream>
#include <string>
using namespace std;

float readNumber(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;

	return number;
}

float sumNumbers()
{
	int sum = 0, number = 0, counter = 1;

	do
	{
		number = readNumber("Plesae enter number " + to_string(counter));

		if (number == -99)
			break;
		sum += number;
		counter++;
	} while (number != 99);

	return sum;
}

int main()
{
	cout << "Result = " << sumNumbers();
	return 0;
}
