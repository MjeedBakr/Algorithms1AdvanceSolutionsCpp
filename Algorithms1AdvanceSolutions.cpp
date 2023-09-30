#include <iostream>
#include <string>
using namespace std;

int readNumber()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;

	return number;
}

int readPower()
{
	int power;
	cout << "Please enter the power: ";
	cin >> power;

	return power;
}

int powerOfM(int number, int m)
{
	if (m == 0)
		return 0;

	int p = 1;

	for (int i = 1; i <= m; i++)
		p = p * number;

	return p;
}





int main()
{
	cout << "Result = " << powerOfM(readNumber(), readPower());
	return 0;
}
