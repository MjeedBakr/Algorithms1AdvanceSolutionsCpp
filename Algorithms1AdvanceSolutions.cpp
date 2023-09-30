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

void powerOf2_3_4(int number)
{
	int a, b, c;

	a = number * number;
	b = number * number * number;
	c = number * number * number * number;
	cout << a << " " << b << " " << c;
}





int main()
{
	powerOf2_3_4(readNumber());
	return 0;
}
